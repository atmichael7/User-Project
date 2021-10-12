#ifndef PROGRAM_MENU_H
#define PROGRAM_MENU_H

#include <iostream>
#include <windows.h>
#include "PrintLetter.h"
#include "Contacts_Menu.h"

using namespace std;

void Main_Menu(string un)
{
  string x = un;
  bool Main_Menu_Run = true;
  while (Main_Menu_Run == true)
  {

    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    k = 14;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" =================", 15);
    PLR("     Main Menu   " , 15);
    PLR(" =================", 15);

    k = 9;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" | [1] Contacts  |", 15);
    PLR(" | [2] Profile   |", 15);
    PLR(" | [3] Games     |", 15);
    PLR(" | [4] Settings  |", 15);
    PLR(" | [5] Sign out  |", 15);

    k = 14;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" =================", 15);
    PLR("   version 0.008"  , 15);
    PLR(" =================", 15);


    cout << endl << " -->";
    string ans;
    cin >> ans;


    if (ans == "1" || ans == "Contacts" || ans == "contacts")
    {
      system("CLS");
      Contact_Program(x);
    }

    if (ans == "2" || ans == "Profile" || ans == "profile")
    {

    }

    if (ans == "3" || ans == "Games" || ans == "games")
    {

    }

    if (ans == "4" || ans == "Settings" || ans == "settings")
    {

    }

    if (ans == "5" || ans == "Sign out" || ans == "sign out")
    {
      Main_Menu_Run = false;
    }




  }

}









#endif
