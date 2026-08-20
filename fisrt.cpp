#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a three number";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"a is longest";
    }
    if(b>a&&b>c)
    {
        cout<<"b is greatest";
    }
    cout<<"c is lognest";
}