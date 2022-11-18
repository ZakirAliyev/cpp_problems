#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	string a;
	getline(cin,a);
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='A' || a[i]=='E' || a[i]=='I'||
		   a[i]=='O' || a[i]=='U' || a[i]=='Y'||
		   a[i]=='a' || a[i]=='e' || a[i]=='i'||
		   a[i]=='o' || a[i]=='u' || a[i]=='y')
		   sum++;
	}
	cout<<sum;
}
