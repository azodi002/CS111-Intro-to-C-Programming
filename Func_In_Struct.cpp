/*
How to Compile: g++ Func_In_Struct.cpp or g++ Func_In_Struct.cpp -o struct
How to run: ./a.out or ./struct

Goal of Program: Print hello world using a function defined inside a struct
What I Learned: How to define a function inside a struct and call the function in main
*/

#include <iostream>
using namespace std;

struct Hello
{
  void printHelloWorld()
   {
     cout << "Hello World" << endl;
   }
};


int main(void)
{
  Hello H1;
  H1.printHelloWorld();

  return 0;
}
