#include<iostream>
using namespace std;
int main(){
    int n=0;
    int sum=0;
    int i=1;
    again:
    n++;
    sum+=n;
    if(n<=25){
cout<<"Sum of first "<<i <<" natural numbers is "<<sum <<endl;
    i++;
    goto again;
    }
}