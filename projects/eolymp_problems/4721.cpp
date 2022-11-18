#include <bits/stdc++.h>
using namespace std;
int main()
{
	intmax_t y,sum1=0,o,n,k,b,sum=0,has=1;
	cin>>n>>k;
	intmax_t h=n;
	while(h!=0)
	{
		y=h%10;
		sum1++;
		h=h/10;
	}
	for(int i=0;i<k;i++)
	{
		b=n*has;
		has=has*pow(10,sum1);
		sum+=b;
	}
	intmax_t u=pow(sum,2);
	cout<<u;
}
