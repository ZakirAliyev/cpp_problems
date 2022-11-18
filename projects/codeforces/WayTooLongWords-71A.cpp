#include <iostream>
using namespace std;
int main()
{
	int n,i,b;
	cin>>n;
	string a;
	for(i=0;i<n;i++)
	{
		cin>>a;
		b=a.size();
		if(b<11) cout<<a<<endl;
		else cout<<a[0]<<b-2<<a[b-1]<<endl;
	}
}
