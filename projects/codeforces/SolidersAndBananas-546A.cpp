#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long k,n,w,i,sum=0,m;
	cin>>k>>n>>w;
	for(i=1;i<=w;i++)
	sum+=k*i;
	int y=sum-n;
	if(y>=0) cout<<y;
	if(y<0) cout<<0;
}
