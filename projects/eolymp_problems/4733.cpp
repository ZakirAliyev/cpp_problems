#include <iostream>
#include <cstring>
using namespace std;
int main()
{ 
	string a;
	cin>>a;
	int n=a.size();
	int c=a[n-2]*10+a[n-1];
	int b=a[n-3]*100+a[n-2]*10+a[n-1];
	if(a[n-1]%2==0) cout<<"Yes"<<endl;
	else cout<<"No"<<endl; 
	if(c%4==0 || a=="0" || a=="4" || a=="8") cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	if(b%8==0 || a=="8"  || a=="16" || a=="24" || a=="32"        
			  || a=="40" || a=="48" || a=="56" || a=="64"
			  || a=="72" || a=="80" || a=="88" || a=="96") cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
