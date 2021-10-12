#include "Auth.h"
#include "Program_Menu.h"
//#include "User_Data.txt"
#include <iostream>
#include <windows.h>

using namespace std;




int main()
{

  bool LoginScreen = true;

  while (LoginScreen == true)
  {
      system("CLS");
      HANDLE  hConsole;
    	int k;
    	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    	k = 4;
    	SetConsoleTextAttribute(hConsole, k);

      cout << "---------------------------" << endl
    			<< "   Welcome to secure info" << endl
    			<< "---------------------------" << endl << endl;

      k = 15;
      SetConsoleTextAttribute(hConsole, k);



      cout << "   Username: ";
      string Username;
      cin >> Username;
      cout << "   Password: ";

      k = 17;
    	SetConsoleTextAttribute(hConsole, k);

      string Password;
      cin >> Password;

      k = 15;
      SetConsoleTextAttribute(hConsole, k);

      system("CLS");

      IdentityCheck(Username, Password);




  }

  cout << "We are out";

}
