#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	if(a[0]=='-') cout<<a[2];
	else cout<<a[1];
}
