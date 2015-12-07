/*
How to compile: g++ replaceSpace.cpp or g++ replaceSpace.cpp -o replace
How to run: ./a.out or ./replace

Goal of program: Replace all spaces in a user input with the string %20
Example of input: Hello World. -> Output: Hello%20World.

What I Learned: How to use vectors and built in functions associated with vectors. Vectors are also dynamic and not static like arrays

*/


#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(void)
{

  vector <char> V;
  string input;//User input of a word/sentence
 
  cout << "Enter a word: ";
  getline(cin,input);//Read all of user input (including sentence)
  cout << endl;

  /*Go through user input character by character*/
  for(int i=0; i<input.size();i++)
    {
      if(input[i]!= ' ') //If no space is in the current character of the user input
	{
	  V.push_back(input[i]);//Push the value that it already was
	}
     
      else //If user input has a space then we replace with %20
	{
	  V.push_back('%');
	  V.push_back('2');
	  V.push_back('0');
	}
    }

  /*Print the new user input with the spaces replaced by %20*/
  for(int i=0; i<V.size();i++)
    {
      cout << V[i];
    }
  cout << endl;

  return 0;
}
