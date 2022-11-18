#include <iostream>
using namespace std;
int main ()
{
	int n,i,g,j,kenar=0,a,r,b;
	cin>>n;
	b=n-4;
	a=(n-2)/2;
	for(i=0;i<n;i++)
	cout<<"*";
	cout<<endl;
	for(i=0;i<a;i++)
	{
		cout<<"*";
		for(j=0;j<kenar;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(g=0;g<b;g++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(r=0;r<kenar;r++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		kenar++;
		b-=2;
	}
	cout<<"*";
	for(i=0;i<kenar;i++)
	{
		cout<<" ";
	}
	cout<<"*";
	for(i=0;i<kenar;i++)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;
	kenar--;
	b+=2;
	for(i=0;i<a;i++)
	{
		cout<<"*";
		for(j=0;j<kenar;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(g=0;g<b;g++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(r=0;r<kenar;r++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
		kenar--;
		b+=2;
	}
	for(i=0;i<n;i++)
	{
		cout<<"*";
	}
}
