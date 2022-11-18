#include <iostream>
using namespace std;
int main()
{    
    int n,sum=0;    
    cin>>n;  
    long long a[n];    
    while(n>0) 
	{  
        if(n%2!=0) 
        sum++;
		n/=2;  
    }  
    cout<<sum;
}  
