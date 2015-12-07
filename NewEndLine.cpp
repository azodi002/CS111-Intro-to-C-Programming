/*
Compiler: g++
How to Compile: g++ NewEndLine.cpp or g++ NewEndLine -o EndLine
How to run: ./a.out or ./EndLine

Goal of Program: Print messages on two separate lines without using endl or \n
What I Learned: How to use endl(cout)
*/

#include <iostream>
using namespace std;

int main(void)
{

  cout << "This is on the FIRST line";
  endl(cout);
  
  cout << "This is on the SECOND line";
  endl(cout);

  return 0;
}
