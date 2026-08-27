#include <iostream>
#include <string>
using namespace std;
int main()
{
  int year = 0, salery = 0;
  char qualf; //-> Press "p" for postgraduation, Press "g" for graduation
  string gender;
  cout << "Enter your years of service: ";
  cin >> year;
  if(!(cin.fail())){
  cout << "Enter your Qualification (Press \"p\" for postgraduation, Press \"g\" for graduation): ";
again_qualf:
  cin >> qualf;
  if (qualf != 'p' && qualf != 'g')
  {
    cout << "Please Enter valid Qualification (p OR g): ";
    goto again_qualf;
  }
  cout << "Enter your gender: ";
again_gender:

  cin >> gender;
  if (gender != "male" && gender != "female")
  {
    ;
    cout << "Please Enter male or female: ";
  }
  if (gender == "male")
  {
    if (year >= 10)
    {
      if (qualf == 'p' || qualf == 'P')
      {
        salery = 15000;
      }
      else if (qualf == 'g' || qualf == 'g')
      {
        salery = 12000;
      }
    }
    else if (year < 10)
    {
      if (qualf == 'p' || qualf == 'P')
      {
        salery = 10000;
      }
      else if (qualf == 'g' || qualf == 'g')
      {
        salery = 7000;
      }
    }
  }
  else if (gender == "female")
  {
    if (year >= 10)
    {
      if (qualf == 'p' || qualf == 'P')
      {
        salery = 12000;
      }
      else if (qualf == 'g' || qualf == 'g')
      {
        salery = 10000;
      }
    }
    else if (year < 10)
    {
      if (qualf == 'p' || qualf == 'P')
      {
        salery = 7000;
      }
      else if (qualf == 'g' || qualf == 'g')
      {
        salery = 6000;
      }
    }
  }
  cout << "Your salery is " << salery;
}
else
cout<<"\033[31m Invalid Years \033[0m";
}