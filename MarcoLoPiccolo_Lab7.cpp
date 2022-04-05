// MarcoLoPiccolo_Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there

#include "User.h"           //uses the classes User and Administrator which already includes the Security class, so it doesn't need to be declared here
#include "Administrator.h"  //since security header is technically already included and that has iostream and string library and using namespace std, then they don't need to be included here 

int main()
{
    User testUser;                     //declares class type user which then allows us to use the function that the class has
    Administrator testAdministrator;   //declares class type administrator which then allows us to use the function that the class has
    string userName;                  //two strings that the user will input into and each name represents what will be inputted into it
    string password;


    cout << "Please Enter a username for testing User Class" << endl;
    cin >> userName;                                                      //Prompts user to enter a username and password

    cout << "Please Enter a password for testing User Class" << endl;
    cin >> password;

    if (testUser.Login(userName, password)) {                           //Calls the class function and if it comes back true then the password and username are accepted
        cout << "Username and password accepted" << endl;
    }
    else {
        cout << "Username and password not accepted" << endl;
    }

    cout << "Please Enter a username for testing Administrator Class" << endl;
    cin >> userName;                                                                //Prompts user to enter a username and password

    cout << "Please Enter a password for testing Administrator Class" << endl;
    cin >> password;

    if (testAdministrator.Login(userName, password)) {                         //Calls the class function and if it comes back true then the password and username are accepted
        cout << "Username and password accepted" << endl;
    }
    else {                                                                        
        cout << "Username and password not accepted" << endl;
    }

    system("Pause");
    return 0;
}

