#include<iostream>
using namespace std;
int main(){
    int num;
    int rem,rev=0;
    cout<<"Enter Number: ";
    cin>>num;
    while(num!=0){
        rev=rev*10 + num %10;
        num/=10;
    }
    cout<<"Reverse is "<<rev;
return 0;
}