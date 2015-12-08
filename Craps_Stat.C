//Omid Azodi
//03-06-2014
//crapsStat.C

#include <iostream>
using namespace std;

int main()
{

  srand(time(0));
  int firstpt;
  const int NUM_GAMES = 100000;
  int newroll;
  int win = 0;
  int lose = 0;
  double resultwin;
  double resultwinper;
  double resultloseper;
  double resultlose;

  for (int i=100000; i>=0; i--)
    {
    
      firstpt = (rand()%6+1) + (rand()%6+1);

	if (firstpt == 7 || firstpt == 11)
	  {
	    win++;	         
	  }
	else if (firstpt == 2 || firstpt == 3 || firstpt == 12)
	  {
	    lose++;
	  }

	else
	  {
	    
	   do
	    {
	      
	      newroll = (rand()%6+1) + (rand()%6+1);
	    } 
	    
	   while(newroll!= 7 && firstpt!= newroll);

	   if(newroll==7)
	     {
	       lose++;
	     }

	   else if (newroll == firstpt)
	     {
	       win++;
            }
	  
	   
}

    }

  resultwin = (win) / 100000.0;
  resultlose = (lose)/ 100000.0;
  resultwinper = resultwin *100.0;
  resultloseper = resultlose *100.0;

  cout << resultwinper << "% win";
  cout << endl;
  cout << resultloseper << "% lose";
  cout << endl;
  return 0;
}
