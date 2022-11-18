#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,n,m,a,sum=0;
	cin>>n;
	h=n;
	while(n!=0)
	{
		m=n%10;
		a=pow(m,3);
		sum+=a;
		n=n/10;
	}
	if(sum==h) cout<<"YES";
	else cout<<"NO";
}
