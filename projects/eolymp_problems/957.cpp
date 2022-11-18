#include <iostream>
#include <cmath>
#include <iomanip>
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
	double x=sqrt(sum);
	cout<<fixed<<setprecision(4)<<x;
}
