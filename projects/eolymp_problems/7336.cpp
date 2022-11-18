#include <iostream>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	a=a*n;
	b=b*n;
	if(b>=100)
	{
		while(b>=0)
		{
			b=b-100;
			a++;
		}
		b=b+100;
		a=a-1;
		cout<<a<<" "<<b;
	}
	else
	{
		cout<<a<<" "<<b;
	}
}
