#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i=0,j,k=0,p=0;
	cin>>n;
	int a[100];
    while(n>0) 
	{
        a[i]=n%2;
        n=n/2;
        i++;
    }
    int e=i-1;
    int z=i-1;
    for(j=i-1;j>=0;j--)
    {
    	if(a[j]==1)
    	{
    		k+=pow(10,z);
    		z--;
		}
	}
	int r=0;
	for(j=i-1;j>=0;j--)
	{
		if(a[j]==1)
    	{
    		r+=pow(2,e);
			e--;
		}
	}
	cout<<r;
}
