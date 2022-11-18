#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,d,sum=0;
	cin>>n>>a>>b>>c>>d;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a && sum<1)
		{
			for(int j=b;j>=a;j--)
			{
				cout<<i<<" ";
			}
			sum++;
		}
	}
}
