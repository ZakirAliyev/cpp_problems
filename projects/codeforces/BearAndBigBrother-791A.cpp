#include <iostream>
using namespace std;
int main()
{
	int a,b,sum=0;
	cin>>a>>b;
	while(true)
	{
		a*=3;
		b*=2;
		sum++;
		if(a>b)
		break;
	}
	cout<<sum;
}
