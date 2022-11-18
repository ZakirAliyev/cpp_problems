#include <iostream>
using namespace std;
int main()
{
	int a,m,sum=0,sum1=0;
	cin>>a>>m;
	while(sum<m)
	{
		sum+=a;
		a++;
		if(sum<m)
		sum1++;
	}
	cout<<sum1;
}
