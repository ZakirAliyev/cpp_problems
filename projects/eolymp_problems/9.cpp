#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,h,n,sum=0,has=1;
	cin>>n;
	for(int i=pow(10,n-1);i<pow(10,n);i++)
	{
		h=i;
		while(i!=0)
		{
			m=i%10;
			sum+=m;
			has*=m;
			i=i/10;
		}
		if(sum==has)
		{
			cout<<pow(10,n)-pow(10,n-1)<<" "<<h;
			break;
		}
		sum=0;
		has=1;
	}
}
