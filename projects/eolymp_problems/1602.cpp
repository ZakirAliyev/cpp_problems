#include <iostream>
using namespace std;
int main()
{
	long long a,b,c,k,max,min;
	cin>>a>>b;
	if(a>b) {
		max=a;
		min=b;
	}
	else {
		max=b;
		min=a;
	}
	while(c!=0)
	{
		c=max%min;
		max=min;
		if(c!=0)
		{
			min=c;
		}
		k=min;
	}
	cout<<(a*b)/k;
}
