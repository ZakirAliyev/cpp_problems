#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size(),sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			sum++;
		}
		if(sum>1)
		{
			cout<<"YES";
			break;
		}
		else sum=0;
	}
	if(sum==0) cout<<"NO";
}
