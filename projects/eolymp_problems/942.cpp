#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	cin>>x1>>y1;
	cin>>x2>>y2;
	cin>>x3>>y3;
	cin>>x4>>y4;
	double ox,oy;
	ox=(x1+x3)/2;
	oy=(y1+y3)/2;
	double d1=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	double d2=sqrt(pow(x4-x2,2)+pow(y4-y2,2));
	cout<<fixed<<setprecision(3)<<ox<<" "<<oy<<endl;
	cout<<fixed<<setprecision(3)<<d1<<" "<<d2;
}
