#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;


/*
Need to put... In order to read files and use them in their respective functions...
   Files do not stay open in a seperate function to be carried over
   therefore they must be opened in each one every time which is annoying

string user = un;
ifstream in_file;
in_file.open("User_"+user+".txt");
//Checks if file opens succesfully
if(in_file.fail())
{
  cout << "Error opening data file";
}

*/


void Add_Contact(string un);
void Remove_Contact();
void Search_Contact();
void List_Contact(string un);



void Contact_Program(string un)
{
  string x = un;
  bool Contact_Menu_Run = true;
  while (Contact_Menu_Run == true)
  {
    HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    k = 5;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" ======================", 15);
    PLR("        Contacts   " , 15);
    PLR(" ======================", 15);

    k = 9;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" | [1] Add Contact    |", 15);
    PLR(" | [2] Remove Contact |", 15);
    PLR(" | [3] Search Contact |", 15);
    PLR(" | [4] List Contacts  |", 15);
    PLR(" | [5] Edit Contact   |", 15);
    PLR(" | [6] Leave Menu     |", 15);

    k = 5;
    SetConsoleTextAttribute(hConsole, k);

    PLR(" ======================", 15);
    PLR("     version 0.0.02"  , 15);
    PLR(" ======================", 15);



    cout << endl << " -->";
    int ans;
    cin >> ans;

    if (ans == 1)
    {

      Add_Contact(x);

    }

    if (ans == 2)
    {
      Remove_Contact();
    }

    if (ans == 3)
    {
      Search_Contact();
    }

    if (ans == 4)
    {
      system("CLS");
      List_Contact(x);
    }

    if (ans == 5)
    {

    }

    if (ans == 6)
    {
      Contact_Menu_Run = false;
    }


  }






}


void Add_Contact(string un)
{
  string First_Name_Input;
  string Last_Name_Input;
  string Phone_Number_Input;
  string Email_Address_Input;
  string Confirm_Contact;
  bool Add_Contact_Info_Loop = true;

  while (Add_Contact_Info_Loop == true)
  {

  system("CLS");
  cout << " Add a new contact" << endl << endl;
  cout << "  First name: ";
  cin >> First_Name_Input;
  cout << endl << "  Last name: ";
  cin >> Last_Name_Input;
  cout << endl << " Phone number: ";
  cin >> Phone_Number_Input;
  cout << endl << "  Email address: ";
  cin >> Email_Address_Input;
  cout << endl << endl << "   Accept? (y/n): ";
  cin >> Confirm_Contact;


  if (Confirm_Contact == "y")
  {
    Add_Contact_Info_Loop = false;
  }
  else
  {

  }

  }

  string user = un;
  ofstream out_file;
  out_file.open("User_"+user+".txt", std::ios_base::app);
  out_file << endl << First_Name_Input + " " + Last_Name_Input + " " + Phone_Number_Input
    + " " + Email_Address_Input;

  cout << " >> Contact Added! << ";
  Sleep(1000);

}


void Remove_Contact()
{
  cout << "REMOVING";
}

void Search_Contact()
{
  cout << "SEARCHING";
}

void List_Contact(string un)
{
  string user = un;
  ifstream in_file;
  in_file.open("User_"+user+".txt");
  //Checks if file opens succesfully
  if(in_file.fail())
  {
    cout << "Error opening data file";
  }

  HANDLE  hConsole;
  int k;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  k = 11;
  SetConsoleTextAttribute(hConsole, k);


  cout << endl << "  >> Fetching Contacts <<  " << endl;
  cout << endl << "  Name:             Number:                   Email:" << endl;
  string line;
  string name;
  int contact_number = 1;
  bool Fetch_Results = true;
  getline(in_file, line);
  cout << contact_number << " " << line << endl;
  while (Fetch_Results == true)
  {

    //cout << contact_number << "  " << line << endl;
    contact_number += 1;
    cout << contact_number << " ";
    in_file >> name;
    cout << name << " ";
    in_file >> name;
    cout << name << "  ";
    in_file >> name;
    cout << name << "  ";
    in_file >> name;
    cout << name << endl;
    Sleep(300);
    if (in_file.eof())
    {
      Fetch_Results = false;
    }
  }


  cout << endl;
  cout << "  >> Type anything and press enter to continue...";
  char cont;
  cin >> cont;
  system("CLS");






}












#endif
