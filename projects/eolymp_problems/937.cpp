#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n],has=1,has1=1;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]!=0)
		has*=a[i];
		has1*=a[i];
	}
	long long p=has1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			cout<<has<<" ";
		}
		else
		{
			has1=has1/a[i];
			cout<<has1<<" ";
		}
		has1=p;
	}
}
