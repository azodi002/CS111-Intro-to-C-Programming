#include <iostream>
using namespace std;

void showProgInfo();
double weightKG (int pounds);
double heightCM (int inches);
double getBMI (int inches, int pounds);
void showResult (int pounds, int inches, double kilo, double cent, double BMI);


  int main()
{
  int pounds=0; 
  int inches=0; 
  double kilo=0.0;
  double cent=0.0;
  double BMI=0.0;

  //call showProgInfo
  showProgInfo();

  cout << endl;
  cout << "Enter a weight: ";
  cin >> pounds;

  cout << endl;
  cout << "Enter a height in inches: ";
  cin >> inches;

  //call weightKG
  kilo=weightKG (pounds);

  //call heightCM
  cent=heightCM (inches);

  //call getBMI
  BMI=getBMI (inches, pounds);
  
  //call showResult
  showResult (pounds, inches, kilo, cent, BMI);
  return 0;
}



void showProgInfo()
  
{
  cout << endl;
  cout << "***********************************************************************" << endl;
  cout << "This program will ask for your height (inches) and weight (pounds) and" << endl;
  cout << "convert them to centimeters and kilograms. It will also tells your BMI." << endl;
  cout << "***********************************************************************" << endl;
  return;
}


double weightKG (int pounds)
{
 double kilo;
 kilo = (pounds * 0.453);
 return kilo;
}


double heightCM (int inches)
{
  double cent;
  cent = (inches * 2.54);
  return cent;
}

 
double getBMI (int inches, int pounds)
{
  double BMI;
  BMI = ((pounds * 703.0) / (inches * inches)) ;
  return BMI;
}


    void showResult (int pounds, int inches, double kilo, double cent, double BMI)
{
  cout << endl;
  cout << " Your height: " << inches << " inches " << "(" << cent << " centimeters)" << endl;
  cout << " Your weight: " << pounds << " pounds " << "(" << kilo << " kilograms)" << endl;
  cout << " Your BMI: " << BMI << endl;
  cout << endl;
  return;
}
