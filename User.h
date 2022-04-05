#pragma once
#include "Security.h"    //Uses Security Class file
#ifndef USER_H           //Used to make sure no header file is included more than once, this is used in conjunction with #define and #endif all in capital letters with an underscore to replace the period
#define USER_H

class User
{
public:
	bool Login(string userName, string password);    //Creates a function that is accessable to everyone and because security.h is included means that string library and iostream have already been included
};

#endif //USER_H