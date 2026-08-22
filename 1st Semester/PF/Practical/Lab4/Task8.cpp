#include<iostream>
using namespace std;
int main(){
    int num1, num2, operation;
    float res;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"Press 1 for Add\nPress 2 for Subtract\nPress 2 for Multiply\nPress 4 for Divide\n";
    cout<<"Enter an operation from above: ";
    cin>>operation;
    switch(operation){
        case 1:
        res=num1+num2;
        break;
        case 2:
        res=num1-num2;
        break;
           case 3:
        res=num1*num2;
        break;
        case 4:
        if(num1>=num2)
        res=num1/num2;
        else {
        cout<<"\033[31m \a Math Error \033[0m";
        return 0;    
    }
        break;
        default:
        cout<<"\033[31m \a Error: Math Error \033[0m";
        return 0;
    }
    cout<<"Result is "<<res;
    return 0;
}