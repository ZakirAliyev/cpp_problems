#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	string a;
	cin>>a;
	int n=a.size();
	if(a=="f")
	cout<<0;
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]=='f')
			{
				cout<<i<<" ";
				break;
			}
		}
		sum=0;
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]=='f')
			{
				cout<<i<<" ";
				break;
			}
		}
	}
}
