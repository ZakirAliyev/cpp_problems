#include<iostream>
using namespace std;
int main()
{ string c;
	getline(cin,c);
	int b=c.size();
	for(int i=0;i<b;i++)
	{
		int num=(int)c[i];
		cout<<"ASCII qiymeti : "<<i+1<<" "<<c[i]<<"="<<num<<endl;
	}
	return 0;
}
