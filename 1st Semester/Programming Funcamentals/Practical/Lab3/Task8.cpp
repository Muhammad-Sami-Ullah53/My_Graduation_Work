#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
    cout<<"a is greater\n";
    else if(b>a)
    cout<<"b is greater\n";
    else
    cout<<"a and b are equal\n";
}