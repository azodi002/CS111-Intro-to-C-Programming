//Omid Azodi
//CS111 Monday/Wednesday 2:30-3:45 pm class
//Dr. Guillen

// Description: This program will ask the user to input miles, inches, pounds, and gallons, and convert miles entered to kilometers, pounds entered to kilos, inches entered to centimeters, and gallons entered to liters. 

#include <iostream>
using namespace std;

int main()
{

  double miles;
  double kilometers;
  double inches;
  double centimeters;
  double pounds;
  double kilos;
  double gallons;
  double liters;


  cout << "Input number of miles: ";
  cin >> miles;
 
  cout << "Input number of inches:";
  cin >> inches;

  cout << "Input number of pounds:";
  cin >> pounds;
  
  cout << "Input number of gallons:";
  cin >> gallons;

  kilometers = (miles * 1.60934);
  centimeters = (inches * 2.54);
  kilos = (pounds * 0.453592);
  liters = (gallons * 3.78541);

 cout << miles << " miles is equivalent to " << kilometers << " kilometers " << endl;
  
 cout << inches << " inches is equivalent to " << centimeters << " centimeters " << endl;

 cout << pounds << " pounds is equivalent to " << kilos << " kilos " << endl;

 cout << gallons << " gallons is equivalent to " << liters << " liters " << endl;

  return 0;
}
