#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0,m,sum=0;
	cin>>n;
	int a[100];
	while(n!=0)
	{
		m=n%10;
		a[i]=m;
		i++;
		n=n/10;
	}
	sort(a,a+i);
	for(int j=0;j<i;j++)
	if(a[j]==a[j+1])
	sum++;
	if(sum>1) cout<<"YES";
	else cout<<"NO";
}
