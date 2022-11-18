#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double sum=0,sum1=0;
	cin>>n;
	double a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			sum+=a[i];
			sum1++;
		}
	}
	double z=sum/sum1;
	if(sum1==0) cout<<"Not Found";
	else cout<<fixed<<setprecision(2)<<z;
}



