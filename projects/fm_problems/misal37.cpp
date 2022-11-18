#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a[3];
	for(int i=0;i<3;i++)
	cin>>a[i];
	for(int i=0;i<3;i++)
	if(a[i]<3 && a[i]>1) 
	cout<<fixed<<setprecision(2)<<a[i]<<endl;
}
