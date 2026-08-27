#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    a+=a;
    cout<<"a+=a : "<<a;
    a*=a;
    cout<<"\na*=a : "<<a;
    a/=a;
    cout<<"\na/=a : "<<a;
    a%=a;
    cout<<"\na%=a : "<<a;
     a-=a;
    cout<<"\na-=a : "<<a;
}