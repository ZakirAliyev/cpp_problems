#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size(),sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='3')
		{
			cout<<"YES";
			break;
		}
		else sum++;
	}
	if(sum==n) cout<<"NO";
}
