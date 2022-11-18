#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double s,b,alfa,y;
	cin>>b>>alfa;
	y=alfa*M_PI/180;
	s=2*b*b*cos(y)*(cos(y)+sqrt(1+sin(y)*sin(y)));
	cout<<fixed<<setprecision(3)<<s;
}
