#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int i,n,sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		a[i]*=-1;
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		sum++;
	}
	cout<<sum;
}
