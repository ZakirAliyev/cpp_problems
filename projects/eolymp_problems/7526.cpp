#include <iostream>
using namespace std;
int main()
{
	int n,b,sum=0,sum1=0;
	cin>>n>>b;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(sum>=b) 
		break;
		sum1++;
	}
	cout<<sum1;
}
