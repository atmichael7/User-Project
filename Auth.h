#include <iostream>
#include <windows.h>
#include "Program_Menu.h"
#include <fstream>

#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

using namespace std;




void Welcome_Screen(string un)
{
  system("CLS");

  HANDLE  hConsole;
  int k;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  k = 15;
  SetConsoleTextAttribute(hConsole, k);

  cout << "---------------------------" << endl
      << "   Welcome " << un << endl
      << "---------------------------" << endl << endl;
  Sleep(2000);
  system("CLS");
}


void IdentityCheck(string x, string y)
{
  HANDLE  hConsole;
  int k;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  k = 4;
  SetConsoleTextAttribute(hConsole, k);


  //Begin opening file after selection
  ifstream in_file;
  in_file.open("User_Data.txt");
  //Checks if file opens succesfully
  if(in_file.fail())
  {
    cout << "Error opening data file";
  }



  string z = x + " " + y;
  string line;

  bool Profile_Scan = true;
  while (Profile_Scan == true)
  {

    getline(in_file, line);

    if (z == line)
    {

      k = 10;
    	SetConsoleTextAttribute(hConsole, k);

      cout << " SUCESS";
      in_file.close();
      Sleep(900);
      Profile_Scan = false;
      Welcome_Screen(x);
      Main_Menu(x);
    }
    if (in_file.eof())
    {

      k = 4;
    	SetConsoleTextAttribute(hConsole, k);

      cout << endl << "  Username or password does not exist.";
      in_file.close();
      Sleep(1500);
      Profile_Scan = false;
    }

  }




/*
  if (x == "Mike")
    {
      Field_1_Secure = true;
    }

  if (y == "123")
    {
      Field_2_Secure = true;
    }

  if (Field_1_Secure == true and Field_2_Secure == true)
  {
    system("CLS");
    cout << "---------------------------" << endl
        << "   Welcome " << x << endl
        << "---------------------------" << endl << endl;
        Sleep(4000);
        system("CLS");
        Main_Menu();
  }
*/
}





#endif
