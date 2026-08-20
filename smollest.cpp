#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a three number";
    cin>>a>>b>>c;
    if(a<b&&a<c)
    cout<<a<<" is smallest";
    else if(b<c&&b<a)
    cout<<"b is smallest";
    else
    cout<<"c is smallest";
}