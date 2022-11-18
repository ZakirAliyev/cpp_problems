#include <iostream>
using namespace std;
int main()
{
	string a;
	cin>>a;
	if(a[0]=='-') cout<<a[1];
	else cout<<a[0];
}
