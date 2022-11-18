#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		char num=(char)a[i];
		cout<<"ASCII qiymeti : "<<a[i]<<"="<<num<<endl;
	}
	return 0;
}
