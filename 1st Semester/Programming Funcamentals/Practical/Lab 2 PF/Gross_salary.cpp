#include<iostream>
using namespace std;
int main(){
    int b_salery;
    float rent,transport;
    float gross;
    cout<<"Enter Basic Salery: ";
    cin>>b_salery;
    rent=0.40*b_salery;
    transport=0.20*b_salery;
    gross=rent+transport+b_salery;
    cout<<"Gross salery: "<<gross;

}