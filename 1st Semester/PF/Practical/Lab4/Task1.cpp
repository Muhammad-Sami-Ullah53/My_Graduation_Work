#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;
    // if(!cin.fail()){
    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<"Leap Year\n";
    }
    else{
        cout<<"Not a Leap Year\n";
    }
    return 0;
}
// else{
// cout<<"\033[31m Error: Invalid Year \033[0m\n";
// }
    

// } 