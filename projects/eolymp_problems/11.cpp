#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int m;
	cin>>m;
	int b[m];
	for(int i=0;i<n;i++)
	cin>>b[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			sum++;
		}
	}
	cout<<sum;
}
