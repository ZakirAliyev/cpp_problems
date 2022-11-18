#include <bits/stdc++.h>
using namespace std;

typedef uint_64_t n,m,p,z;

int main(void)
{
	cin>>n>>m;
	if(n==1)
	{
		if(m>9)
		z=9;
		else
		z=m-1;
	}
	else
	{
		p=pow(10,n-1);
		z=m-p;
	}
	if(z<=0) cout<<0;
	else cout<<z;
}
