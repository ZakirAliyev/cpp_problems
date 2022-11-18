#include <iostream>
using namespace std;
int main()
{
	int n,a,kenar=0,i,j,g;
	cin>>n;
	a=(n-1)*2-1;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<kenar;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(g=0;g<a;g++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		kenar++;
		a-=2;
	}
	for(i=0;i<n-1;i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	a+=2;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<kenar-1;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(g=0;g<a;g++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		a+=2;
		kenar--;
	}
}
