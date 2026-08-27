#include<iostream>
using namespace std;
int main(){
    int div=0,sub=0,grace=0;
    cout<<"Enter your division from 1 to 3 : ";
    cin>>div;
    if(cin.fail() || div>3){
       cout<<"\033[31m Error: Invalid Input\033[0m";
        return 0;
    }
    cout<<"Enter number of subjects in which you are failed: ";
    cin>>sub;
    if(cin.fail()){
        cout<<"\033[31m Error: Invalid Input \033[0m";
        return 0;
    }
    if(div==1){
        if(sub>3)
        grace=30;
        else if(sub<=3)
        grace=5;
    }
   else if(div==2){
        if(sub>2)
        grace=0;
        else if(sub<=2)
        grace=4;
    }
    else if(div==3 && sub>1){
        grace=0;
    }
    cout<<"Your graces marks are "<<grace;
}