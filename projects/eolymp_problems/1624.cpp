#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=30 && b==12)
	cout<<a-29<<" "<<1<<" "<<c+1;
	else if(a<30 && b==12)
	cout<<a+2<<" "<<b<<" "<<c;
	else if(c%400==0 && b==2 && a<28)
	cout<<a+2<<" "<<2<<" "<<c;
	else if(c%400==0 && b==2 && a>=28)
	cout<<a-27<<" "<<3<<" "<<c;
		else if(c%400!=0 && c%100==0 && b==2 && a<27)
		cout<<a+2<<" "<<2<<" "<<c;
		else if(c%400!=0 && c%100==0 && b==2 && a>=27)
		cout<<a-26<<" "<<3<<" "<<c;
	else if(c%4==0 && b==2 && a<28)
	cout<<a+2<<" "<<2<<" "<<c;
	else if(c%4==0 && b==2 && a>=28)
	cout<<a-27<<" "<<3<<" "<<c;
	else if(b==2 && a<27)
	cout<<a+2<<" "<<2<<" "<<c;
	else if(b==2 && a>=27)
	cout<<a-26<<" "<<3<<" "<<c;
	else if((b==1 || b==3 || b==5 || b==7 || b==8 || b==10) && a<30)
	cout<<a+2<<" "<<b<<" "<<c;
	else if((b==1 || b==3 || b==5 || b==7 || b==8 || b==10) && a>=30)
	cout<<a-29<<" "<<b+1<<" "<<c;
	else if((b==4 || b==6 || b==9 || b==11) && a<29)
	cout<<a+2<<" "<<b<<" "<<c;
	else if((b==4 || b==6 || b==9 || b==11) && a>=29)
	cout<<a-28<<" "<<b+1<<" "<<c;
}
