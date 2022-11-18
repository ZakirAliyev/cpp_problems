#include <iostream>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int n=a.size(),sum=0,sum1=0,j=0;
	while(a[j]=='.' || a[j]=='?' || a[j]=='!')
	{
		sum1++;
		j++;
	}
	for(int i=sum1;i<n;i++)
	{
		if(a[i]=='.' || a[i]=='?' || a[i]=='!')
		{
			if(a[i+1]!='.' && a[i+1]!='?' && a[i+1]!='!')
			sum++;
		}
	}
	cout<<sum;
}
