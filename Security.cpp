#include "Security.h"                 //Includes the header of the class

//Function validates the input parameters of the user entering in a username and password by returning 1, 2, or 0 depending on the specific strings entered
//with each number representing what clearance is accessed from each
//The function is of type int so that it can return those numbers
int Security::validate(string username, string password) {
	if ((username == "abbott") && (password == "monday")) {      //If these are entered then it can be used for the administrator class and the user class
		return 1;
	}
	else if ((username == "costello") && (password == "tuesday")) {   //If these are entered then it can only be used for the user class
		return 2;
	}
	else {
		return 0;                      //If this is returned then neither class can be used with it
	};
}
