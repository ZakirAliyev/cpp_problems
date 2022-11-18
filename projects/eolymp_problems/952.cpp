#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,h;
	cin>>a>>h;
	double t=a/2,apo;
	apo=sqrt(pow(t,2)+pow(h,2));
	double s_yan=2*apo*a;
	double s=pow(a,2)+s_yan;
	cout<<fixed<<setprecision(1)<<s;
}
