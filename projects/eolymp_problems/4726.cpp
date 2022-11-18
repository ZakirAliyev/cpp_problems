#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size(),k=0,t=0,sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='f')
		{
			k=i;
			sum++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]=='f')
		{
			t=i;
			break;
		}
	}
	if(sum==0) cout<<" ";
	else if(sum==1) cout<<k;
	else cout<<t<<" "<<k;
}
