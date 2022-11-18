#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,h,s,apo;
	cin>>a>>b>>h;
	apo=sqrt(pow(h,2)+pow(a/2-b/2,2));
	s=2*(a+b)*apo;
	cout<<fixed<<setprecision(2)<<s;
}
