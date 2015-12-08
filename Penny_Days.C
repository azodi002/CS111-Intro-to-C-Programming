/*
Compiler: g++
How to Compile: g++ penny.C or g++ penny.C -o penny
How to run: ./a.out or ./penny

Goal of Program: User enters number of days and each day you receive twice as much you earned the previous day (you start with one penny for the first day)
What I Learned: How to use (#include <iomanip> library functions such as: (setw, left, setprecision)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

  int day;
  double pay = 0.01;
  double total = 0;
  int d;

do
  {
    cout << " Enter number of days: ";
    cin >> day;
   
  }
 
 while(day < 0 || day == 0);

 for(d = 1; d <= day; d++)
     {
       cout <<setw(15) <<left << d <<setw(30) <<fixed <<setprecision(2) <<right << pay;
       cout << endl;
       total += pay;
       pay *= 2;
       // cout << endl;
    
}
 cout << endl;
 cout <<setw(15) <<left <<"Total "  <<setw(30) <<fixed <<setprecision(2) <<right << total;     
 cout << endl;
 return 0;
}
