#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double n,a;
	while(cin>>n)
	{
		a=sqrt(n)+2*n+sin(n);
		cout<<fixed<<setprecision(4)<<a<<endl;
	}
}
