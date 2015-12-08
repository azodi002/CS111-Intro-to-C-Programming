#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double preamount;
  double shipping1;
  double shipping2;
  int movie;
  int sci=0;
  int act=0;
  int hist=0;
  int ter=0;
  int s=0; 
  int a=0;
  int h=0;
  int t=0;
  double total;
  double tax1;
  double totsci;
  double totact;
  double tothist;
  double totter;
  double amount;
  double totamount;
  double final;

  cout << " Enter 1 for sci-fi, Enter 2 for action, Enter 3 for historical, Enter 4 for terror and 0 to go to payment: ";
  cin >> movie;
  cout << endl;

    while(movie == 1 || movie == 2 || movie == 3 || movie == 4)
      {
	switch(movie) 
	  {
          case 1: cout << " How many Sci-fi movies do you want to buy at $10.50 a piece: "; 
	          cin >> sci;
	          s = s + sci;
		  cout << endl; break;

	  case 2: cout << " How many Acton movies do you want to buy at $12.00 a piece: ";
	          cin >> act;
                  a = a +act;    
	          cout << endl; break;
	  
	  case 3: cout << " How many Historical movies do you want to buy at $8.50 a piece: ";
	          cin >> hist;
		  h = h + hist;
	          cout << endl; break;
          
	  case 4: cout << " How many Terror movies do you want to buy at $10.00 a piece: ";
	          cin >> ter;
		  t = t + ter;
	          cout << endl; break;
	  
	  default: cout << " Invalid Entry " << endl;;
	    
	  }
cout << " Enter 1 for sci-fi, Enter 2 for action, Enter 3 for historical, Enter 4 for terror and 0 to stop shopping and go to payment: ";
	cin >> movie;
	cout << endl;

      }

	    totsci = s * 10.50;
	    totact = a * 12;
	    tothist = h * 8.50;
	    totter = t * 10;
	    
	    total = totsci + totact + tothist+ totter;

	    if(total >= 1 && total <= 15)
	      {
		preamount = total;
		amount = (total) + (total *.10);
		shipping1= (total * .10);
		tax1 = (amount * .080);
		totamount = amount + tax1;
		cout << " The amount of the movies before tax and shipping is:$ " <<fixed <<setprecision(2) << preamount;
		cout << endl;
		cout << " The total amount of shipping is:$ " <<fixed <<setprecision(2) << shipping1;
		cout << endl;
		cout << " The total amount of tax is:$ " <<fixed <<setprecision(2)  << tax1; 
		cout << endl;
		cout << "The total amount is:$ " <<fixed <<setprecision(2)  << totamount;
		cout << endl;
	      }


	    else if(total >= 16 && total <= 30)
              {
                preamount = total;
                amount = (total) + (total *.12);
                shipping1= (total * .12);
                tax1 = (amount * .080);
                totamount = amount + tax1;
                cout << " The amount of the movies before tax and shipping is:$ " <<fixed <<setprecision(2)  << preamount;
                cout << endl;
                cout << " The total amount of shipping is:$ "<<fixed <<setprecision(2)  << shipping1;
                cout << endl;
                cout << " The total amount of tax is:$ " <<fixed <<setprecision(2) << tax1;
                cout << endl;
                cout << "The total amount is:$ " <<fixed <<setprecision(2) << totamount;
                cout << endl;
              }


	    else if(total >= 31 && total <= 50)
              {
                preamount = total;
                amount = (total) + (total *.15);
                shipping1= (total * .15);
                tax1 = (amount * .080);
                totamount = amount + tax1;
                cout << " The amount of the movies before tax and shipping is:$ " <<fixed <<setprecision(2) << preamount;
                cout << endl;
                cout << " The total amount of shipping is:$ " <<fixed <<setprecision(2) << shipping1;
                cout << endl;
                cout << " The total amount of tax is:$ " <<fixed <<setprecision(2) << tax1;
                cout << endl;
                cout << "The total amount is:$ " <<fixed <<setprecision(2) << totamount;
                cout << endl;
              }


	    else if(total > 50)
	      {
		 tax1 = (total * .080);
		 final = total + tax1;
		 cout << " The amount of the movies before tax and shipping is: $ " <<fixed <<setprecision(2) << total;
		 cout << endl;
		 cout << " The total amount of shipping is:$ 0 "; 
                 cout << endl;
		 cout << " The total amount of tax is:$ " <<fixed <<setprecision(2)  << tax1;
		 cout << endl;
		 cout << "The total amount is: $ " <<fixed <<setprecision(2) << final;
		 cout << endl;
		 }
	    return 0;
}


