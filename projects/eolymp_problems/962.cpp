#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	double t[4],x[8],a,b,c,d,max;
	for(int i=0;i<8;i++)
	cin>>x[i];
	t[0]=sqrt(pow((x[0]-x[2]),2)+pow((x[1]-x[3]),2));
	t[1]=sqrt(pow((x[2]-x[4]),2)+pow((x[3]-x[5]),2));
	t[2]=sqrt(pow((x[4]-x[6]),2)+pow((x[5]-x[7]),2));
	t[3]=sqrt(pow((x[6]-x[0]),2)+pow((x[7]-x[1]),2));
	sort(t,t+4);
	cout<<fixed<<setprecision(2)<<t[3];
}
