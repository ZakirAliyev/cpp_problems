#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a,has=1,m;
	cin>>a;
	int y=a;
	a=abs(a);
	while(a)
	{
		m=a%10;
		if(m%2==0)
		has*=m;
		a=a/10;
	}
	a=y;
	if(a==0) cout<<0;
	else if(has==1) cout<<-1;
	else cout<<has;
}
