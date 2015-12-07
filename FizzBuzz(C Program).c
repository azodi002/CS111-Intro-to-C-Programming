/*
Compiler: gcc
How to compile: gcc fizzbuzz.c or gcc fizzbuzz.c -o fizzbuzz
How to run: ./a.out or ./fizzbuzz

Goal of Program: User enters how many numbers they want to go up to, if number is divisble by 3 print "Fizz", if divisble by 5 print "Buzz", if divisible by both 3 and 5 print "FizzBuzz"
What I Learned: Learning basic syntax of C (Input from user, Output to screen)
*/

#include <stdio.h>

int main(void)
{
  int Usercounter=0;
  int i;
 
  printf("Till what # do you want to go up till? ");
  printf("\n Answer: ");
  scanf("%d", &Usercounter);
 

  for(i=1;i<=Usercounter;i++)
    {
      if(i%3==0 && i%5==0)
	{
	  printf("FizzBuzz \n");
	}

      else if(i%3==0)
	{
	  printf("Fizz \n");
	}
      
      else if(i%5==0)
	{
	  printf("Buzz \n");
	}
      else
	{
	  printf("%d", i);
	  printf("\n");
	}
    }


  return 0;
}
