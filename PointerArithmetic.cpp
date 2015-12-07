/*
Compiler: g++
How to Compile: g++ PointerToArray.cpp or g++ PointerToArray -o PointerArray
How to run: ./a.out or ./PointerArray

Goal of Program: Print out array using the pointer to the array
What I learned: How to use a pointer to the array for printing the address/value
*/

#include <iostream>
using namespace std;

#define MAX_BOUND_FOR_INTEGER_ARRAY 5

int main(void)
{
  int myIntegerArray[MAX_BOUND_FOR_INTEGER_ARRAY] = {1,3,5,7,9};
  int* ptr;
  
  ptr=myIntegerArray;

  for(int i=0; i<MAX_BOUND_FOR_INTEGER_ARRAY; i++)
    {
      cout << endl;
      cout << "The address of myIntegerArray[" << i << "]: " << ptr << endl;
      cout << "The value of myIntegerArray["   << i << "]: " << *ptr << endl << endl;
      ptr++;
    }

  return 0;
}
