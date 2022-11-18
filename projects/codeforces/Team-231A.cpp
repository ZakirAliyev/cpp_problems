#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,sum1=0,i,j;
	cin>>n;
	int a[n][3];
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
		if(sum>1) sum1++;
		sum=0;
	}
	cout<<sum1;
}
