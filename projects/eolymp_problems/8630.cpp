#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size();
	int max=a[0]-48;
	for(int i=0;i<n;i++)
	{
		if(a[i]-48>max-48)
		max=a[i];
	}
	cout<<max-48;
}
