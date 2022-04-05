#include "User.h"           //Includes the header of the class

                                                        //Input parameters are the strings of the username and the password
bool User::Login(string userName, string password) {    //If 1 or 2 is returned from the security class, then it returns true since the administrator login can also work on user login
	Security userEnter;                                 //Declares a variable of class type security so that the function in the class can be called using the two input parameters of the class
	if ((userEnter.validate(userName, password) == 1) || (userEnter.validate(userName, password) == 2)) {  
		return true;
	}
	else {
		return false;
	}
}