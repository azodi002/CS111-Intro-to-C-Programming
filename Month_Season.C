/*
Compiler: g++
How to Compile: g++ month.C or g++ month.C -o month
How to run: ./a.out or ./month

Goal of Program: User inputs month (as an integer) and output the season (fall,winter,spring,summer)
What I learned: How to use switch statements, and how to implement break and default statements
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

int num;

cout << " Enter the month " << endl;
cin >> num;

switch(num)
  {
  case 12: 
  case 1: 
  case 2:
  cout << " The season is Winter " << endl; 
           break;
	   
  case 3:
  case 4: 
  case 5: 
    cout << " The season is Spring " << endl; 
    break;

  case 6:
  case 7:
  case 8: 
    cout << " The season is SUMMER " << endl; 
    break;
case 9:
case 10:
case 11: 
  cout << " The season is Fall " << endl;
  break;
  
  default: cout << "Invalid month" << endl;
    cout << endl;
  }
return 0;
}
