#pragma once
#include <iostream>      //Includes the libraries iostream and string along with the namespace std here so that it doesn't need to be used anywhere else in the file
#include <string>         //Allows us to use strings and the std commands from the namespace
using namespace std;
#ifndef SECURITY_H       //Used to make sure no header file is included more than once, this is used in conjunction with #define and #endif all in capital letters with an underscore to replace the period
#define SECURITY_H

class Security
{
public: 
	static int validate(string username, string password);   //Creates a function that is accessable to everyone with the public option 
};

#endif //SECURITY_H