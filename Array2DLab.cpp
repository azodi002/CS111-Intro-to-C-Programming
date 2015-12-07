//Omid Azodi
//2-Dimensional Array
//Compiler: g++
//How to Compile: g++ array2lab.cpp
//How to run: ./a.out
//Goal of Program: User inputs 3 test scores for 5 students (each student separately), print out the results and find average of each students test score in a table
//What I learned: How to declare 2-D arrays, print 2-D arrays, input values into a 2-D array, pass 2-D arrays to functions


#include <iostream>
#include <iomanip>
using namespace std;

const int STU=5;
const int TEST=3;

void enter (int exam[][TEST]);
void print (int exam[][TEST]);


int main()
{

  int totalrows=0;
  int totalcols=0;

  int exam[STU][TEST];
  
  enter (exam); 
  cout << endl;
  cout <<setw(10) << "Test#" << setw(8) <<"   Stu 1   Stu 2   Stu 3   Stu 4   Stu 5   Average" << endl;

  print (exam);
  cout << endl;


return 0;
}


void enter (int exam[][TEST])
{
 
  for (int i=0; i<TEST; i++)
 {
 cout <<setw(10) <<left << " Enter scores for Test #" << i+1;
 cout << endl;

  for (int k=0; k<STU; k++)
    {
     cout <<setw(15) <<right << " Student #" << k+1 << ": ";
     cin >> exam[k][i];
    }
  }
  
return;
}

void print (int exam[][TEST])
{

  double totalrows=0.0;
  double totalcols=0.0;

  for (int j=0; j<TEST; j++)
  {
    cout <<setw(10) <<right << j+1;
    

    for(int k=0; k<STU; k++)
       {
	 cout <<setw(8) << exam[k][j];
	 totalcols+=exam[k][j];

  
       }

 cout<<fixed <<setprecision(1)<<setw(10)<<right <<(totalcols/STU);
 cout << endl;
 totalcols=0;

  }
  cout <<setw(10) << "Average";
  for(int k=0; k<STU; k++)
    {
      for (int j=0; j<TEST; j++)
	{
	  totalrows+=exam[k][j];
	}
     
      cout<<setw(8) <<fixed <<setprecision(1)<< totalrows/TEST;
      totalrows=0;
    }



    
  
  return;

}
