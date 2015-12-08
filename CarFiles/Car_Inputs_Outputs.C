#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()

{
  string model;
  double miles;
  double gallon;
  double totalmiles=0.0;
  double totalgallons;
  double avg;
  int count=0;
  double mpg=0.0;
 
  ifstream inputFile;
  ofstream outputFile;

  inputFile.open("Car_Input_File.dat");
  outputFile.open("Car_Output_File.dat");

 outputFile <<setw(10) << left << "Model" <<setw(20) << " Miles driven" <<setw(30) << right << " Gallons of gas used" <<setw(40) <<right << "MPG" ;
 outputFile << endl;

  if(!inputFile)
    {
      cout << " Cannot open the file " << endl;
      exit(1);
    }

  else //if (inputFile.good())
    {
    while (inputFile.good())
    {
          
      inputFile >> model;
      inputFile >> miles;
      inputFile >> gallon;
      count++;     
      totalmiles = miles + totalmiles;
      totalgallons = totalgallons + gallon;
      mpg = miles/gallon;
      

 outputFile <<setw(10) << left << model <<setw(20) << miles <<setw(30) <<right << gallon <<setw(40) <<right <<fixed <<setprecision(2) <<mpg << endl;
 outputFile << endl;   
 
    }

    avg = (totalmiles/totalgallons);
    outputFile << setw(5) << left << "Total Miles Driven: " << totalmiles << " miles" << endl;;
    outputFile << setw(5) << left << "Total Gallons of Gas Used: " << totalgallons << " gallons" << endl;
    outputFile << setw(5) << left << "Average MPG: " <<avg << " miles per gallon " << endl;

}

  outputFile.close();
  return 0;
}
