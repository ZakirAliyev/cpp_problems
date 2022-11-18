#include <iostream>
using namespace std;
int main()
{
	int sum=0,sum1=0;
	string a;
	cin>>a;
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		if(i%2)
		sum+=a[i]-48;
		else if(i%2==0)
		sum1+=a[i]-48;
	}
	cout<<sum*sum1;
}
