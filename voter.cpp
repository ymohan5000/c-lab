#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter your age";
    cin>>num;
    if(num>=18&&num<60)
    cout<<"you are elagible for voting";
    else if(num<=18)
    cout<<"you are not elagible for voiting";
    else if(num>=60)
    cout<<"you are very old";

}