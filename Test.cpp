#include <iostream>
#include <vector>
#include <fstream>
#include "FirstName.txt"
//#include "LastName.txt"
#include "Random_Number_Gen.h"

using namespace std;

int main()
{
  ifstream in_file;
  in_file.open("User_"+user+".txt");
  //Checks if file opens succesfully
  if(in_file.fail())
  {
    cout << "Error opening data file";
  }


}
