#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	cin>>a>>b;
	c=(a+b)/2;
	d=a*b*2;
	if(a>b)
	{
		b=c;
		a=d;
	}
	else 
	{
		a=c;
		b=d;
	}
	cout<<fixed<<setprecision(2)<<a<<" "<<b;
}
