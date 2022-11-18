#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,z,mi;
	cin>>x>>y>>z;
	if(z>=y && y>=x)
	cout<<fixed<<setprecision(2)<<x*2<<" "<<y*2<<" "<<z*2;
	else
	{
		x=abs(x);
		y=abs(y);
		z=abs(z);
		cout<<fixed<<setprecision(2)<<x<<" "<<y<<" "<<z;
	}
}
