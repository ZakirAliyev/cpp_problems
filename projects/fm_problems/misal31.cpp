#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,m,sum=0,a=0;
	cin>>n;
	h=n;
	while(n!=0)
	{
		m=n%10;
		a++;
		if(h%m==0) sum++;
		else
		{
			cout<<"NO";
			break;
		}
		n=n/10;
	}
	if(sum==a) cout<<"YES";
}
