#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	string a;
	cin>>a;
	int n=a.size();
	int k=n-1;
	for(i=0;i<n-1;i++)
	{
		if(a[i]<a[i+1])
		{
			k=i;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i!=k)
		cout<<a[i];
	}
}
