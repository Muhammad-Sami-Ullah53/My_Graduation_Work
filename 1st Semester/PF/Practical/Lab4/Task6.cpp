#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    string day;
    cout<<"Enter a number 1-7 : ";
    cin>>num;
    switch(num){
        case 1:
        day="Monday";
        break;
        case 2:
        day="Tuesday";
        break;
        case 3:
        day="Wednesday";
        break;
        case 4:
        day="Thursday";
        break;
        case 5:
        day="Friday";
        break;
        case 6:
        day="Saturday";
        break;
        case 7:
        day="Sunday";
        break;
        default:
        day="\033[31m Invalid Day\033[0m";
    }
    cout<<"Corresponding day is "<<day;
}