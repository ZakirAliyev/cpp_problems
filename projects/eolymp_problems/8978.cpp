#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.length(),sum=0,i;
	cout<<a[1]<<a[3]<<a[9]<<endl;
	cout<<a[0]<<a[1]<<a[n-1]<<endl;
	for(i=n-5;i<n;i++)
	cout<<a[i];
	cout<<endl;
	for(i=0;i<n-4;i++)
	cout<<a[i];
	cout<<endl;
	for(i=0;i<n;i+=2)
	{
		cout<<a[i];
		sum++;
	}
	cout<<endl<<sum<<endl;
	for(i=n-1;i>=0;i-=2)
	cout<<a[i];
	cout<<endl;
}
