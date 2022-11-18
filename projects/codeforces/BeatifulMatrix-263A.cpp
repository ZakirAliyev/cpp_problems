#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l,r,t;
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		cin>>a[i][j];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				k=i;
				l=j;
			}
		}
	}
	r=2-k;
	t=2-l;
	if(r<0) r*=-1;
	if(t<0) t*=-1;
	int p=r+t;
	cout<<p;
}
