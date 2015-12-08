// Omid Azodi
// Electric Bill
// This program will tell you how much you need to pay for your electric bill 

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{

  int month;
  double current;
  double previous;
  double total;
  double sum;
  double tot;

  cout << " Enter the current month: ";
  cin >> month;

  cout << " Enter the current electric meter reading: ";
  cin >> current;

  cout << " Enter the previous electric meter reading: ";
  cin >> previous;
  cout << endl;

  total = current - previous;
 
  if (month == 10)
  {
    cout << " The current month is October and the previous month was September" << endl;
 
 if (total > 400)
   {
    tot = (total - 400);
    sum = (8.50) + (tot *.06575);
    cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
    cout << endl;
   }
  }

    else if (month == 1)
    {
    cout << " The current month is January and the previous month was December " << endl;
    if (total > 400)
      {
    tot = (total - 400);
    sum = (8.50) + (tot *.06575);
    cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
    cout << endl;
      }
       
     }
    
    else if (month == 2)
    {
    cout << " The current month is February and the previous month was January " << endl;
    if (total > 400)
      {
    tot = (total - 400);
    sum = (8.50) + (tot *.06575);
    cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
    cout << endl;

      }
    }
  
    else if (month == 3)
    {
    cout << " The current month is March and the previous month was February" << endl;
    if (total > 400)
      {
    tot = (total - 400);
    sum = ((8.50) + (tot *.06575));
    cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
    cout << endl;

      }
    
    }

   else if (month == 4)
     {
      cout << " The current month is April and the previous month was March" << endl;     
      if (total > 400)
	{
      tot = (total - 400);
      sum = (8.50) + (tot *.06575);
      cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
      cout << endl;
	}

     }

   else if (month == 5)
     {
   cout << " The current month is May and the previous month was April" << endl;
   if (total > 400)
      {
   tot = (total - 400);
   sum = (8.50) + (tot *.07525);
   cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
   cout << endl;
      }
     }

 else if (month == 6)
   {
 cout << " The current month is June and the previous month was May" << endl;
 if (total > 400)
    {
 tot = (total - 400);
 sum = (8.50) + (tot *.07525);
 cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
 cout << endl;
    }
     
}

   else if (month == 7)
     {
   cout << " The current month is July and the previous month was June" << endl;
   if (total > 400)
      {
   tot = (total - 400);
   sum = (8.50) + (tot *.07525);
   cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
   cout << endl;
	 }
    
}

  else if (month == 8)
    {
  cout << " The current month is August and the previous month was July" << endl;
  if (total > 400)
      {
  tot = (total - 400);
  sum = (8.50) + (tot *.07525);
  cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
  cout << endl;
      }
   }
  
else if (month == 9)
  {
cout << " The current month is September and the previous month was August" << endl;
if (total > 400)
   {
tot = (total - 400);
sum = (8.50) + (tot *.07525);
cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
cout << endl;
   }
  }
 
else if (month == 11)
  {
cout << " The current month is November and the previous month was October" << endl;
if (total > 400)
   {
tot = (total - 400);
sum = (8.50) + (tot *.6575);
cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed << setprecision(2) << sum;
cout << endl;
	 }

}

  else if (month == 12)
     {
       cout << " The current month is December and the previous month was November " << endl;
       if (total > 400)
	 {
	   tot = (total - 400);
	     sum = (8.50) + (tot *.06575);
	   cout << " You consumed " << total << " KWH " << " and your amount due is $" << fixed\
		<< setprecision(2) << sum;
	   cout << endl;

	 }
}
   else 
     {
       cout << " Wrong input, enter month again" << endl;
     }
    
   if (total >= 0 && total <= 400)
     {
      sum = 8.50;
     
      cout << " You consumed " << total << " KWH " << " and your amount due is $" <<fixed << setprecision(2) << sum   << endl;
     }
 
   cout << endl;
    return 0;
}

