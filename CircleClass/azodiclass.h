// Omid Azodi
// This file is called azodiclass.h
// My header (implimentation with declaration)

#ifndef AZODICLASS_H
#define AZODICLASS_H

class circle2
{
 private:
  double radius;
  
 public:
  circle2(double=1.0);
  double getArea();
  double getCircumference();
  double getRadius();
  void changeradius(double);
  

};

circle2::circle2(double r)
{
  radius=r;
}

double circle2:: getArea()
{
  return 3.1416*radius*radius;
}

double circle2:: getCircumference()
{
  return 2*3.1416*radius;
}

double circle2:: getRadius()
{
  return radius;
}

void circle2:: changeradius(double radius2)
{
  radius=radius2;
}

#endif

