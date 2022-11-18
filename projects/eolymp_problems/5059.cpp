#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n],i;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cout<<a[0]<<" ";
	for(i=0;i<n;i++)
	{
		if(a[i]!=a[0])
		{
			cout<<a[i];
			break;
		}
	}
}
