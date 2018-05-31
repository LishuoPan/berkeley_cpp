// FILENAME: hello_driver.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 03/29/2018
// COMPILER: Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED: hello_interface.h hello_interface.cpp
// PURPOSE:
//      contain the function to prompt user to enter the first name
//      output the infomation user input

#include "hello_interface.h"
string input_name(void)
{
    string userName;                                                // declare string userName
    cout  << "Please type in your first name and hit \"enter\":  ";
    getline(cin, userName);                                         // get user input
    return userName;
}


void print_name( string name )
{
    cout << endl << "Hello your first name is: " << name << endl << endl;
}
