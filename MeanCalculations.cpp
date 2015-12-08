#include <iostream>
#include <cmath>
using namespace std;

//double getArith(double num, double result, double total, double sum);
double getArith(char choice, double num, double sum, double total, double result);
//double getGeo(double number, double total1, double sum1, double result1);
double getGeo(char choice1, double number, double total1, double sum1, double result1);
//double getHarm(double number2, double total2, double sum2, double result2,double finalresult);
double getHarm(char choice2 ,double number2, double total2, double sum2, double result2, double finalresult);

 int main()
{
  int user;
  char choice;
  char choice1;
  char choice2;
  double num;
  double result;
  double total;
  double sum;
  double number;
  double total1;
  double sum1=1.0;
  double result1;
  double number2;
  double total2;
  double sum2;
  double result2;
  double finalresult;
  
  cout << " Enter 1 for arithmetic mean: " << endl;
  cout << " Enter 2 for geometric mean: " << endl;
  cout << " Enter 3 for harmonic mean: " << endl;
  cout << " Enter anything else to exit the program:" << endl;
  cin >> user;
  
  switch(user)

    {
    case 1:  result=getArith(choice, num, sum, total, result);
    break;
    case 2: result1=getGeo(choice1, number, total1, sum1, result1);
    break;
    case 3: finalresult=getHarm(choice2 , number2, total2,  sum2,  result2, finalresult);
    break;
    default: cout << " Invalid Entry, Program will now EXIT " << endl;  
    }

  return 0;
}

double getHarm(char choice2 ,double number2, double total2, double sum2, double result2, double finalresult)
{
  
do
  {
    cout << " Enter a number: ";
    cin >> number2;
    
    sum2 = (pow(number2,-1) + sum2); // Add reciprocals of #'s
    total2++;
    cout << " Enter y to enter more numbers or n to exit: ";
    cin >> choice2;
  }
 while(choice2 == 'y' || choice2 == 'Y');

 result2 = (sum2/total2); // Divide sum by n
 finalresult = pow(result2,-1); // Take reciprocal of result
 cout << " The harmonic mean is " << finalresult;
 cout << endl;
}



double getArith(char choice, double num, double sum, double total, double result)
{

do
  {
    cout << " Enter a number: ";
    cin >> num;

    sum = sum+num;
    total++;

    cout << " Enter y to enter another number or n if there are no more numbers to input: ";
    cin >> choice;
 }
 while(choice == 'y' || choice == 'Y');
 result = (sum/total);
 cout << " The artimetic mean is " << result;
 cout << endl;
 return result;
}




double getGeo(char choice1, double number, double total1, double sum1, double result1)
{

do
  {
    cout << " Enter a number: ";
    cin >> number;
    sum1 = (sum1 * number);
    total1++;
    cout << " Enter y to enter another number or n if there are no more numbers to input: ";
    cin >> choice1;
  }
 while(choice1 == 'y' || choice1 == 'Y');

 result1 = pow(sum1,(1/total1));
 cout << " The geometric mean is: " << result1;
 cout << endl;
 return result1;
}
