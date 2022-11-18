#include <iostream>
#include <iomanip>
using namespace std;

void max_x_y(double a,double b,double max)
{
	if(a>b)
	{
		max=a;

	}
	else
	{
		max=b;

	}
}

void max_y_z(double b,double c,double max1)
{
	if(b>c)
	{
		max1=b;
	}
	else 
	{
		max1=c;
	}
}

double min_1_2_xyz()
{
	double a,b,c,max,max1,d;
	max_x_y(a,b,max);
	max_y_z(b,c,max1);
	if(max<max1 && max<d) return max;
	else if(max1<max && max1<d) return max1;
	else return d;
}

int main()
{
	double a,b,c,max,max1;
	cin>>a>>b>>c;
	double d=a+b+c;
	cout<<fixed<<setprecision(2)<<max<<" "<<max1;
}
