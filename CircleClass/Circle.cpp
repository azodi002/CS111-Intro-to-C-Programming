//Omid Azodi
//This file is called azodihwk6.cpp
// My header file is called azodiclass.h

#include "azodiclass.h"
#include <iostream>
using namespace std;


int main()
{
  circle2 c1(1.0);
  circle2 c2(1.0);

  cout << " ____________________________________________________________________________________";
  cout << endl;

  cout << " The first circle: Radius is initialized to " << c1.getRadius() << endl;
  cout << endl;
  cout << " The first circle: Area is "<< c1.getArea() << endl;
  cout << endl;

 cout << " The first circle: Circumference is "<< c1.getCircumference()<<endl;
 cout << endl;
 cout << " ____________________________________________________________________________________";
 cout << endl;

  c2.changeradius(2.0);
  
  cout << " Changing the radius of second circle: to " <<c2.getRadius()<<endl;
  cout << endl;

  cout << " The second circle radius is now " << c2.getRadius()<<endl;
  cout << endl;
  

 cout << " The second circle: The Area with a radius of " <<c2.getRadius() << " The area is " << c2.getArea() << endl;
 cout << endl;

 cout << " The second circle: The Circumference with a radius of " << c2.getRadius() << " The circumference is " << c2.getCircumference() << endl;
 cout << endl;
 cout << " ____________________________________________________________________________________";


 cout << endl;
 return 0;
}
