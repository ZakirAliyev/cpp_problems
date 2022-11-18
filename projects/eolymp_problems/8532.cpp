#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		cout<<pow(i,2)<<" ";
	}
	cout<<endl;
	for(i=b;i>=a;i--)
	{
		cout<<pow(i,3)<<" ";
	}
}
