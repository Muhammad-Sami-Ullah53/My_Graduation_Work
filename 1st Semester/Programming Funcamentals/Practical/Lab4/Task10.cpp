#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter you garde (A,B,C,D,F) : ";
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Excellent";
        break;

        case 'B':
        cout<<"Good";
        break;

        case 'C':
        cout<<"Average";
        break;

        case 'D':
        cout<<"Poor";
        break;

        case 'F':
        cout<<"Fail";
        break;

        default:
        cout<<"\033[31m Error: Invalid Grade \033[0m";
    }
}