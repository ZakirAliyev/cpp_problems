#include <iostream>
using namespace std;
int main()
{
	int n,i,sum=0,sum1=0,j=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum++;
		}
	}
	int b[sum];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
	}
	int max=b[0];
	for(j=0;j<sum;j++)
	{
		if(max<=b[j])
		{
			sum1++;
			max=b[j];
		}
	}
	cout<<sum1;
}








