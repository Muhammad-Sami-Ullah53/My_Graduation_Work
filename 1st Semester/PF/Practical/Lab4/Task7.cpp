#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;
    if(!(cin.fail())){
        cout<<"\033[31m Error: Only alphabets are acceptable \033[0m\n";
        return 0;
    }
     if(c=='a' || c=='A' 
        || c=='e' || c=='E'
        ||c=='i' || c=='I' 
        || c=='o' || c=='O' 
        || c=='u' || c=='U' ){
            cout<<"Character is vowel\n";
        }
        else{
            cout<<"Character is consonent\n";
        }
    
   
}