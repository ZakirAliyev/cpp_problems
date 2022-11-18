#include <iostream>
using namespace std;
int main()
{
	int n,l;
	cin>>n>>l;
	int a[100];
    int i = 0;
    while (n>0)
	{
        a[i]=n%2;
        n/=2;
        i++;
    }
    if (a[l-1]==1) cout<<"YES";
    else cout<<"NO";
}
