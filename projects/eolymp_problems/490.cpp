#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int b=a.size(),i,sum=0;
	for(i=0;i<b;i++)
	{
		if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/')
		{
			sum++;
		}
	}
	cout<<sum;
}
