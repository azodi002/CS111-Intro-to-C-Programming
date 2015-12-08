/*
Compiler: g++
How to compile: g++ guess.C
How to run: ./a.out

Goal of Program: User guesses a number between 1-100 until it is correct
What I learned: How to use random generator function and create a small game
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{

 int num;
 srand(time(0));
 num = rand()% 100 + 1;

 int guess;
 char answer;

 cout << " Guess a number between 1-100: ";
 cin >> guess;
 

 while(guess != num)
   {
     if(guess > num)
       {
       cout << guess << " is too high " << endl;;
     cout << " Guess again: ";
     cin >> guess;
     cout << endl;
       }

     if(guess < num)
       {
     cout << guess << " is too low " << endl;
     cout << " Guess again: ";
     cin >> guess;
     cout << endl;
       }

    if(guess == num)
      {
	cout << guess << " IS CORRECT!!!!!!!!!!!!!! " << endl;
      }
   }

 return 0;

}
