#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long x,y;
	cin>>x;
	if(x>=10)
	{
		y=pow(x,3)+5*x;
		cout<<y;
	}
	else
	{
		y=pow(x,2)-2*x+4;
		cout<<y;
	}
}
