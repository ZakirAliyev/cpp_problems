#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size();
	putchar(toupper(a[0]));
	for(int i=1;i<n;i++)
	cout<<a[i];
}
