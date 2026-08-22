#include<iostream>
using namespace std;
int main(){
    int a,b,c,result;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    result=a+b*c-a/b+c%b;
    cout<<"Result: "<<result;
}