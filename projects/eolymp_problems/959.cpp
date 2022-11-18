#include <iostream>
using namespace std;
int main()
{
	int n,a,d,e;
	cin>>n;
	a=n%10;
	d=n/1000%10;
	e=a+d;
	cout<<e;
}
