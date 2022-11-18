#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double n,f;
	while(cin>>n)
	{
		f=pow(n,3)+2*pow(n,2)-3;
		cout<<fixed<<setprecision(4)<<f<<endl;
	}
}
