#include<iostream>
using namespace std;
int main(){
    int month=0,days=0;
    cout<<"1.Jan\n2.Feb\n3.March\n4.April\n5.May\n6.June\n7.July\n8.Aug\n9.Sep\n10.Oct\n11.Nov\n12.Dec\n";
    cout<<"Enter the month number from above : ";
    cin>>month;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 )
    days=31;
    else if(month==4 || month==6 || month==9 || month==11 )
    days=30;
    else if(month==2){
        int leap;
        cout<<"Leap Year\n1.Yes\n2.No\nEnter : ";
        cin>>leap;
        if(leap==1)
        days=29;
        else if(leap==2)
        days=28;
    }
    else{
        cout<<"\033[31m Error: Invalid Month \033[0m";
        return 0;
    }
    cout<<"Total days in month number "<<month<<" are "<<days;
    
}