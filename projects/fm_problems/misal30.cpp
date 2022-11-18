#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size(),sum=0;
	for(int i=0;i<n;i++)
	sum+=a[i]-48;
	if(sum%2==0 && sum%3==0) cout<<"YES";
	else cout<<"NO";
}
