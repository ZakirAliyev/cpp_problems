#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	string a;
	getline(cin,a);
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			sum++;
			continue;
		}
		else break;
	}
	for(int i=sum;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			if(a[i+1]!=' ')
			{
				cout<<a[i];
			}
		}
		else cout<<a[i];
	}
}
