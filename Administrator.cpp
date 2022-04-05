#include "Administrator.h"             //Includes the header of the class

                                                                     //Input parameters are the username and password that are string values
bool Administrator::Login(string userName, string password) {       //If 1 is returned from the security class function then it returns true
	Security adminEnter;                                          //Declares a variable of class type security so that the function in the class can be called using the two input parameters of the class
	if (adminEnter.validate(userName, password) == 1) {           //Calls the class function from class type security using the input parameters of the login function
		return true; 
	}
	else {
		return false;
	}
}