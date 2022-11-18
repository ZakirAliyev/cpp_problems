#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    int n,m,i,j,a;
    cout<<" ___________________________________ \n";
    cout<<"|                                   |\n";
    cout<<"|            Problem :              |\n";
    cout<<"|                                   |\n";
    cout<<"|    Is it more black or white ?    |\n";
    cout<<"|___________________________________|\n\n\n";
    SetConsoleTextAttribute(h,4);
    cout<<"Please enter only numbers , no other symbols :)\n\n";
    SetConsoleTextAttribute(h,10);
    cout<<"Enter the width of the chessboard (n) : ";
    while(cin>>n)
    {
        SetConsoleTextAttribute(h,4);
        if(n>0) break;
        else cout<<"'n' must be a positive number , enter 'n' again : ";
    }
    SetConsoleTextAttribute(h,10);
    cout<<"\nEnter the heigth of the chessboard (m) : ";
    while(cin>>m)
    {
        SetConsoleTextAttribute(h,4);
        if(m>0) break;
        else cout<<"'m' must be a positive number , enter 'm' again : ";
    }
    SetConsoleTextAttribute(h,11);
    cout<<"\nColor of (i, j) color : "<<endl;
    cout<<"\nBlack --> 1\nWhite --> 2\n\n";SetConsoleTextAttribute(h,10);
    cout<<"Please enter your choise : ";
    while(cin>>a)
    {
        SetConsoleTextAttribute(h,4);
        if(a>0 && a<3) break;
        else cout<<"Forbidden choice, make the right choice : ";
    }
    SetConsoleTextAttribute(h,10);
    cout<<"\nEnter the coordinate of 'i' : ";
    while(cin>>i)
    {
        SetConsoleTextAttribute(h,4);
        if(i<=n && i>0) break;
        else cout<<"'i' cannot be less than 'n', enter 'i' again : ";
    }
    SetConsoleTextAttribute(h,10);
    cout<<"\nEnter the coordinate of 'j' : ";
    while(cin>>j)
    {
        SetConsoleTextAttribute(h,4);
        if(j<=m && j>0) break;
        else cout<<"'j' cannot be less than 'm', enter 'j' again : ";
    }
    SetConsoleTextAttribute(h,9);
    if(n%2==0 || m%2==0)
        cout<<"\nThe number of White and Black checkers is equal !!!\n\n";
    else
    {
        int sum=i+j,first=0;
        if(sum%2 && a==1) first=2;
        else if(sum%2 && a==2) first=1;
        else if(sum%2==0 && a==1) first=1;
        else if(sum%2==0 && a==2) first=2;
        if(first==1) cout<<"\nBlack Checkers > White Checkers !!!\n\n";
        else if(first==2) cout<<"\nWhite Checkers > Black Checkers !!!\n\n";
    }
    return 0;
}
