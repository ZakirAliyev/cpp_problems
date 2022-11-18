#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	a=n/100%10;
	b=n/10%10;
	c=n%10;
	int f,g,h;
	f=a*10+b;
	g=b*10+c;
	h=a*10+c;
	if(f>=g && f>=h) cout<<f;
	else if(g>=f && g>=h) cout<<g;
	else cout<<h;
}
