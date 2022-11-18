#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.length(),sum=0,i;
	cout<<a[2]<<a[6]<<a[10]<<endl;
	cout<<a[0]<<a[n-2]<<a[n-1]<<endl;
	for(i=0;i<7;i++)
	cout<<a[i];
	cout<<endl;
	for(i=4;i<n;i++)
	cout<<a[i];
	cout<<endl;
	for(i=1;i<n;i+=2)
	{
		cout<<a[i];
		sum++;
	}
	cout<<endl<<sum<<endl;
	for(i=n-1;i>=0;i--)
	cout<<a[i];
}
