#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	string a;
	cin>>a;
	int n=a.size();
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		sum++;
	}
	cout<<sum;
}
