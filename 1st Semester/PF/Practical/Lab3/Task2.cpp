#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
    cout<<"a is greater\n";
    else if(a<b)
    cout<<"a is smaller";
    else if(a==b)
    cout<<"a and b are equal";
    else if(a!=b)
    cout<<"a is not equal to b";
    else if(a<=b)
    cout<<"a is smsaller than equal to b";
    else if(a>=b)
    cout<<"a is greater than equal to b";
}