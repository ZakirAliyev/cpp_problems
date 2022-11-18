#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b=a;
    int n=a.size();
    for(int i=0;i<n/2;i++)
    swap(a[i],a[n-i-1]);
    if(a==b) cout<<"Yes";
    else cout<<"No";
}
