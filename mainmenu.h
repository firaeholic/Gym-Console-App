#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<Windows.h>
#include<cstring>
#include<conio.h>
using namespace std;

int menu()
{

   int choice;

  mainmenu:
  cout << endl << endl;
  system("cls");
  cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Where do you want to go" << endl << endl ;
  cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<1> Set personal schedule" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<2> Get expert recommened schedules" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<3> View your schedule" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<4> Get information on cardio workouts" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<5> Give feed back" << endl << endl;
  cout << "\t\t\t\t\t\t\t\t<6> Exit" << endl << endl;
   cout << "\t\t\t\t\t\t\t\t--------------------------------------" << endl << endl;
  cout << "\t\t\t\t\t\t\t\tEnter your choice:       ";
  cin >> choice;
  cout << endl << endl;
 if(choice ==1 || choice ==2 || choice==3||choice==4|| choice==5||choice==6)
 {

  return choice;
 }
   else
   {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
        cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option ...";
        getch();
        goto mainmenu;
   }

}
