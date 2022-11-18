// Helpful Maths - 339A

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int b[100];
	int n=a.size(),i,j=0;
	
	for(i=0;i<n;i+=2)
	{
		b[j]=a[i]-48;
		j++;
	}
	
	sort(b,b+j);
	
	if(n==1) cout<<a;
	else
	{
		for(i=0;i<j;i++)
		{
			if(i==j-1)
			{
				cout<<b[i];
				break;
			}
			else
			{
				cout<<b[i]<<"+";
			}
		}
	}
	
}
