#include <iostream>
using namespace std;
int main()
{
	int has=1;
	string a;
	cin>>a;
	if(a[0]=='-')
	{
		for(int i=1;i<a.size();i++)
		{
			if(a[i]%2==0)
			{
				has*=(a[i]-48);
			}
		}
	}
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]%2==0)
			{
				has*=(a[i]-48);
			}
		}
	}
	if(has==1) cout<<-1;
	else cout<<has;
}
