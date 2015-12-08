/*
Compiler: g++
How to compile: g++ military.cpp or g++ military.cpp -o military
How to run: ./a.out or ./military

Goal of Program: To determine whether a person based off their age/gender can join the military
What I learned: How pass by reference can be used
*/

#include <iostream>
using namespace std;

void GetInfo (string& name, char& gender, int& age);
bool Verify (char gender, int age);
void PrintLetter (bool eligibility, string name);

int main()
{
  string name;
  char gender;
  int age;
  bool eligibility;
  
  GetInfo (name, gender, age);
  eligibility=Verify (gender, age);
  PrintLetter (eligibility, name);

  return 0;

  cout << endl;
}


void GetInfo (string& name, char& gender, int& age)
{
  cout << " Enter your name: ";
  cin >> name;
  cout << endl;
  
  cout << " Enter your gender (m or f): ";
  cin >> gender;
  cout << endl;
  
  cout << " Enter your age: ";
  cin >> age;
  cout << endl;
  
  cout << endl;

  return;
}

bool Verify (char gender, int age)
{

  if (gender == 'f' || gender == 'F')
  {
    return false;
  }
 else if (gender == 'm' && age >= 18)
    {
      return true;
    }
 else if (gender == 'm' && age <=18)
   {
     return false;
   }
 else if (gender == 'M' && age >=18)
   {
     return true;
   }
 else if (gender == 'M' && age <=18)
   {
     return false;
   }

  cout << endl;
}
  

void PrintLetter (bool eligibility, string name)
{
  
  if(eligibility == true)
    {
      cout << "Dear " << name << " Please join the military " << endl;
    }

  else
    {
      cout << " Thank you for applying. " << endl;
    }
  cout << endl;
}
  
