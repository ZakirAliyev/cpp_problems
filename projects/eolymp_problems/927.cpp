#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n*2];
	double b[n*2];
	for(int i=0;i<n*2;i+=2)
	{
		cin>>a[i];
		cin>>b[i+1];
	}
	for(int i=0;i<n*2;i+=2)
	{
		if(b[i+1]<50)
		{
			sum+=a[i];
		}
	}
	cout<<sum;
}
