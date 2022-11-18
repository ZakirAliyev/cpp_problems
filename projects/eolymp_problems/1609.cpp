#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	char b;
	int sum=0;
	cin>>b;
	if(a[0]=='-')
	{
		for(int i=1;i<a.size();i++)
		{
			if(a[i]==b)
			sum++;
		}
	}
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]==b)
			sum++;
		}
	}
	cout<<sum;
}
