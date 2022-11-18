#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,sum=0,i,sum1=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	i=0;
	while(true)
	{
		if(a[i]!=0)
		{
			sum1+=a[i];
			sum++;
		}
		if(sum>1)
		break;
		i++;
	}
	cout<<sum1;
}
