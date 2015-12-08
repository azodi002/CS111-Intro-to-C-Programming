//Omid Azodi

#include <iostream>
using namespace std;

int main()
{

  srand(time(0));
  int firstpt;
  int newroll;
  firstpt = (rand()%6+1) + (rand()%6+1);
  cout << firstpt << endl;
        
	if (firstpt == 7 || firstpt == 11)
	  {
	    cout << " WIN " << endl;
	         
	  }
	else if (firstpt == 2 || firstpt == 3 || firstpt == 12)
	  {
	    cout << " LOSE " << endl;
	  }

	else
	  {
	    
	    cout << " Roll Again " << endl;
	   do
	    {
	      
	      newroll = (rand()%6+1) + (rand()%6+1);
	      cout << newroll << endl;
	    } 
	    
	   while(newroll!= 7 && firstpt!= newroll);

	   if(newroll==7)
	     {
	       cout << " LOSE " << endl;
	     }

	   else if (newroll == firstpt)
	     {
	       cout << " WIN " << endl;
	     }


	  }
  return 0;
}
