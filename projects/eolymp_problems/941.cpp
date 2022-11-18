#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	n=abs(n);
	a=n/100%10;
	b=n/10%10;
	c=n%10;
	int has=a*b*c;
	int cem=a+b+c;
	int ferq=has-cem;
	cout<<ferq;
}
