#include <iostream>
using namespace std;
int main()
{
	int n;
	double sum=0,sum1=0,sum2=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	double m=sum/n;
	for(int i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			sum1+=a[i];
			sum2++;
		}
	}
	cout<<sum1<<" "<<sum2;
}
