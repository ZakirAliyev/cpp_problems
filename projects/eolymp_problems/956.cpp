#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double apo,s,v,h,a_kv;
	cin>>v>>h;
	a_kv=3*v/h;
	apo=sqrt(a_kv/4+pow(h,2));
	s=2*(apo*sqrt(a_kv));
	cout<<fixed<<setprecision(1)<<s;
}
