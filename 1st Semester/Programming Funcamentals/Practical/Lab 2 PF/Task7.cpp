#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    if(num2%num1==0){
        cout<<"First Number is multiple of 2nd\n";
    }
    else{
        cout<<"First number is not multiple of 2nd\n";
    }
}