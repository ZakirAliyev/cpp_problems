#include <iostream>
using namespace std;
int main()
{
	int n,i=0,sum=0,sum1=0,y,j,m=1,u=0;
	char a;
	cin>>a;
	cin>>n;
	for(y=0;y<n;y++)
	{
		for(;i<n-1;i++)
		{
			sum++;
		}
		for(j=0;j<m;j++)
		{
			sum1++;
		}
		m+=2;
		u++;
		i=u;
	}
	cout<<sum+sum1<<endl;
	i=0;m=1;u=0;
	for(y=0;y<n;y++)
	{
		for(;i<n-1;i++)
		{
			cout<<" ";
		}
		for(j=0;j<m;j++)
		{
			cout<<a;
		}
		m+=2;
		u++;
		i=u;
		cout<<endl;
	}
}
