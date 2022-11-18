#include <iostream>
using namespace std;
int main()
{
	int n,q,w,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>q>>w;
	int x=a[q-1];
	int y=a[w-1];
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			cout<<y<<" ";
		}
		else cout<<a[i]<<" ";
	}
}
