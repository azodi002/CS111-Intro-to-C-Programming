/*
How to compile: g++ permutation.cpp or g++ permutation.cpp -o permutation
How to run: ./a.out or ./permutation

Goal of Program: User inputs two words and determines whether they are permutations of eachother
Example of an input: god dog, Output: These words are permutations
What I Learned: Definition of a permutation (Implemented in an O(2) Algorithm)
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string input1;
  string input2;

  cout << "Enter word: " << endl;
  cin >> input1;
  cout << "____________________" << endl;
  //_____________________________________

  cout << "Enter another word: " << endl;
  cin >> input2;
  cout << "____________________ " << endl;
  //_____________________________________

  if(input1.size()!=input2.size())
    {
      cout << "Not a permutation of eachother" << endl;
    }

  else
    {
      int count=0;
      
      for(int i=0; i<input1.size();i++)
	{
	  for(int j=0; j<input2.size();j++)
	    {
	      if(input1[i]==input2[j])
		{
		  count++;//Increment counter
		  cout << count << "," << endl;
		}
	    }//End of inner for loop
	}//End of outter for loop
	  


      if(count==input1.size() && count==input2.size())
     { 
      cout << "**********************************" << endl;
      cout << "They are permutations of eachother" << endl;
      cout << "**********************************" << endl;
     }
 
  else
    {
        cout << "**********************************" << endl;
	cout << "They are NOT permutations of eachother" << endl;
	cout << "**********************************" << endl;
    }

  }//End of big else  

  return 0;
}




