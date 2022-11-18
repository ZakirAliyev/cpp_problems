#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int sum=0;
	if(a[0]=='-')
	{
		for(int i=1;i<a.size();i++)
		{	
			sum+=a[i]-48;
		}
	}
	else 
	{
		for(int i=0;i<a.size();i++)
		{
			sum+=a[i]-48;
		}
	}
	cout<<sum;
}
