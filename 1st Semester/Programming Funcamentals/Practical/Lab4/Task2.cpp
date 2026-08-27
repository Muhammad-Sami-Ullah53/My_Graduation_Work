#include<iostream>
using namespace std;
int main(){
    int day,fine;
    cout<<"Enter the number of days: ";
    cin>>day;
    if(day<=5){
    fine=50;
cout<<"Your fine is "<<fine;    
}
    else if(day<=10){
    fine=100;
cout<<"Your fine is "<<fine;    
}
    else if(day<30){
    fine=200;
cout<<"Your fine is "<<fine;    
}
    else
    cout<<"Your membership has been canceled\n";
}