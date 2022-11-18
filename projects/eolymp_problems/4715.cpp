#include <iostream>
using namespace std;
int main()
{
	int i;
	string a;
	cin>>a;
	int n=a.size();
	cout<<a[2]<<endl;
	cout<<a[n-2]<<endl;
	for(i=0;i<5;i++)
	cout<<a[i];
	cout<<endl;
	for(i=0;i<n-2;i++)
	cout<<a[i];
	cout<<endl;
	for(i=0;i<n;i+=2)
	cout<<a[i];
	cout<<endl;
	for(i=1;i<n;i+=2)
	cout<<a[i];
	cout<<endl;
	for(i=n-1;i>=0;i--)
	cout<<a[i];
	cout<<endl;
	for(i=n-1;i>=0;i-=2)
	cout<<a[i];
	cout<<endl<<n;
}
