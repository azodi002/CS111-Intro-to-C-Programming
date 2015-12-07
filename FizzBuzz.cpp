/*
Compiler: g++
How to compile: g++ fizzbuzz.cpp or g++ fizzbuzz.cpp -o fizzbuzz
How to run: ./a.out or ./fizzbuzz

Goal of Program: User enters how many numbers they want to go up to, if number is divisble by 3 print "Fizz", if divisble by 5 print "Buzz", if divisible by both 3 and 5 print "FizzBuzz"
What I Learned: Using Mod (%) reducing main by having separate functions for specific tasks (Smaller functions = more reusability)
*/

#include <iostream>
using namespace std;

void question();
int userinput();
void fizzbuzz(int x);

int main()
{
  int user;

  question();
  user=userinput();
  fizzbuzz(user);

  return 0;
}


void question()
{
 cout << "Enter how many times: ";
}

int userinput()
{
  int x;
  cin >> x;
  return x;
} 

void fizzbuzz(int terminator)
{
  for(int i=1; i<=terminator;i++)
    {
      if(i%3==0 && i%5==0)
	{
	  cout << "FizzBuzz" << endl;
	}
      else if(i%3==0)
	{
	  cout << "Fizz" << endl;
	}
      else if(i%5==0)
	{
	  cout << "Buzz" << endl;
	}
      else
	{
      cout << i << endl;
	}
    }
}
