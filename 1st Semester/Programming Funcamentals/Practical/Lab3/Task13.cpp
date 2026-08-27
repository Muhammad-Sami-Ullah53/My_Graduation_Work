#include<iostream>
const float pie=3.14;
using namespace std;
int main(){
    int r,d,c,a;
    cout<<"Enter radius of circle: ";
    cin>>r;
    d=r*2;
    c=2*pie*r;
    a=pie*r*r;
    cout<<"Area: "<<a<<endl;
    cout<<"Circumference: "<<c;
}