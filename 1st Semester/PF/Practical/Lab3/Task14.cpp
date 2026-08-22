#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three sides of triangle: ";
    cin>>a>>b>>c;
    if((a*a + b*b )==(c*c) || (a*a + c*c) == (b*b) || (a*a)==(b*b + c*c))
    cout<<"Right angle triangle\n";
    else if(a==b && b==c)
    cout<<"Equilateral triangle\n";
    else if(a==b || b==c || c==a)
    cout<<"Isoscelles triangle";
    else
    cout<<"Please Enter valid sides\n";

}