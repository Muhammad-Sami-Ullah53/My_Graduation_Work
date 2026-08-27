#include<iostream>
using namespace std;
int main(){
    int a=2,b=3;
    cout<<"Before Swapping\n";
    cout<<"a= "<<a <<"\nb= "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping\n";
    cout<<"a= "<<a <<"\nb= "<<b<<endl;
}