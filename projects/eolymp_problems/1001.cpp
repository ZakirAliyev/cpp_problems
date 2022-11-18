#include <iostream>
using namespace std;
int main ()
{
    int n,m,c=0,b=1,z,f,d=0;
    cin>>n>>z;
    while(n>0)
    {
        m=n%10;
        f=z%10;
        c=c+m*b;
        d=d+f*b;
        b*=2;
        n/=10;
        z/=10;
    }
    int y=c+d,a[100],i=0;
    while (y>0) 
	{
        a[i]=y%2;
        y/=2;
        i++;
    }
    for (int j=i-1;j>=0;j--)
    cout<<a[j];
}
