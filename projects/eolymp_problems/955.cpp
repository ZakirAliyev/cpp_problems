#include <iostream>
using namespace std;
int main()
{
	int n,m,sum=0;
	cin>>n;
	while(n!=0)
	{
		m=n%10;
		sum+=m;
		n=n/10;
	}
	int x=sum*sum;
	cout<<x;
}
