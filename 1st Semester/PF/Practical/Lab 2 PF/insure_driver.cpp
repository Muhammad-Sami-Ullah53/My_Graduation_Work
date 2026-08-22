#include<iostream>
using namespace std;
int main(){
    int age;
    bool status; //married -> 1, unmarried -> 0
    bool gender; //male -> 1, female -> 0
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your mateiral status(1 for married & 0 for unmarried): ";
    cin>>status;
    cout<<"Enter your gender (1 for male & 0 for female): ";
    cin>>gender;
    if(status){
        cout<<"Driver is insured\n";
    }
    else if((!status) && gender && age>30){
   cout<<"Driver is insured\n";
    }
    else if((!status) && (!gender) && age>25){
        cout<<"Driver is insured\n";
    }
    else{
        cout<<"Driver is not insured\n";
    }
}