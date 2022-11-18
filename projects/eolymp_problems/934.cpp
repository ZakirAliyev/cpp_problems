#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double v,s,d,p,h_kv,apo,y;
	cin>>d>>p;
	h_kv=pow(p,2)-pow(d,2)/2;
	apo=sqrt(pow(d/2,2)+h_kv);
	v=(pow(d,2)*sqrt(h_kv)/3);
	s=2*(d*apo)+pow(d,2);
	cout<<fixed<<setprecision(3)<<s<<" "<<v;
}
