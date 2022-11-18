#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	string a[100];
	for(i=0;i<=n;i++)
	getline(cin,a[i]);
	for(i=0;i<=n;i++)
	cout<<a[i]<<endl;
}
