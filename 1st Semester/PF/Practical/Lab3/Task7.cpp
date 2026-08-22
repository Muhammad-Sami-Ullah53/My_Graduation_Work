#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    a++;
    b++;
    c++;
    int sum=a+b+c;
    cout<<"After increment sum is "<<sum;
}