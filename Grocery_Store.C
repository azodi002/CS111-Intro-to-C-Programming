/*
Compiler: g++
How to Compile: g++ receipt.C 
How to run: ./a.out

Goal of Program: User enters name, date, item they want to buy, and price, and output is a receipt for the users purchase
What I Learned: How to use the (#include <iomanip> library to make outputs aligned and neat
*/


#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

int main()

{

  string name;
  string date;
  string item;
  double price;
  double salestax;
  double tax;
  double total;


  cout << " Enter the sales person's first name: " ;
  cin >> name;
  cout << endl;

  cout << " Enter today's date (mm/dd/yyyy): " ;
  cin >> date;
  cout << endl;

  cout << " Enter the item name one word: " ;
  cin >> item;
  cout << endl;

  cout << " Enter the price of the item: " ;
  cin >> price;
  cout << endl;

  tax = .0775;
  salestax = (price * tax);
  total = (salestax + price);
  cout << endl;
  cout << "- - - - - - - - - - - - - - - - - - - - - - - " << endl;
  cout << endl;
  cout << "\"Your Friendly Neighbor Store\"" << endl;
  cout << endl;
  cout << right << setw(35) << date;
  cout << endl;
  cout << right << setw(35) << name;
  cout << endl;
  cout << left << setw(10) << item << right << setw(25) <<fixed <<setprecision(2) << "$" << price;
  cout << endl;
  cout << left << setw(10) << "Sales tax " << right << setw(25) << "$" << salestax << endl;
  cout << left << setw(10) << "Total " << right << setw(25) << "$" << total << endl;
  cout << endl;
  cout << "- - - - - - - - - - - - - - - - - - - - - - - " << endl;
  cout << " Thank you for shopping with us! " << endl;
  return 0;
}
