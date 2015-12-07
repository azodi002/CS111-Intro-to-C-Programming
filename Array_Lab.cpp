//azodihwk4.cpp
//Omid Azodi
//Homework #4 Due: 04/14/2014
//CS 111 M/W 2:30pm-3:45pm


#include <iostream>
using namespace std;

void initialize (int array[]); //Prototype for initializing the array 
void setZero (int positive[], int negative[]);
void thirdfunction (int positive[], int negative[], int array[], int& p, int& n);
void print(int positive[], int negative[], int p, int n);



const int MAX =10; //Making MAX a global variable so all functions can use it

int main()

{
  const int MAX =10;//Making MAX a local variable so the functions called can use it 
  int array[MAX];  
  int positive[MAX];
  int negative[MAX];
  int p = 0;
  int n = 0;

 
  initialize (array); // Called function that asks user to enter 10 integers 
  setZero (positive,negative);//Called function that sets both positive and negative arrays to 0
  thirdfunction (positive, negative,array, p, n);
  print( positive, negative,p, n);



  return 0; 
}


void initialize (int array[])
{
  for (int i =0; i<MAX; i++)//Starting the array at index 0
    {
      cout << " Enter a number: ";
      cin >> array[i];//Storing each number entered into the new index of the array
     
    }
  return;//Void function returns nothing
}


void setZero (int positive[], int negative[])
{
  for (int i=0; i<MAX; i++)//Starting the array at index 0
    {
      positive[i]=0;//Setting each index in the array to 0
      negative[i]=0;//Setting each index in the array to 0
    }

  return;//Void function returns nothing
}


void thirdfunction (int positive[], int negative[], int array[], int& p, int& n)
  {

    for (int i = 0; i<MAX; i++)
    {
      if (array[i]>=0)
	{
	  positive[p]=array[i];
	  p++;
	}
      else 
	{
	  negative[n]= array[i];
	  n++;
	}
   
    }
  return;  
}

		      
void print(int positive[], int negative[], int p, int n)
{
  for (int i=0; i<p; i++)
    {
      cout << "The positive numbers are " << positive[i];
      cout << endl;
    }
  for(int i=0; i<n; i++)
    {
      cout << "The negative numbers are " << negative[i];
      cout << endl;
    }
  return;
}

