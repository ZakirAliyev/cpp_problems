#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a<=0) cout<<fixed<<setprecision(2)<<a<<" ";
	else cout<<fixed<<setprecision(2)<<pow(a,2)<<" ";
	if(b<=0) cout<<fixed<<setprecision(2)<<b<<" ";
	else cout<<fixed<<setprecision(2)<<pow(b,2)<<" ";
	if(c<=0) cout<<fixed<<setprecision(2)<<c<<" ";
	else cout<<fixed<<setprecision(2)<<pow(c,2)<<" ";
}
