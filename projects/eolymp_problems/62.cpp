#include <iostream>
using namespace std;
int main()
{
	long long n,i,has=1;
	cin>>n;
	for(i=1;i<2001;i++)
	{
		has*=i;
		if(has==n)
		{
			cout<<i;
			break;
		}
	}
}
