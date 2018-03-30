// FILENAME: hello_driver.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 03/29/2018
// COMPILER: Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED: hello_interface.h hello_interface.cpp
// PURPOSE:
//      contain the function to prompt user to enter the first name
//      output the infomation user input

#include "hello_interface.h"
#include <iostream>         // allow use of cin cout
#include <string>           // allow use of string
using namespace std;        //using directive
string name;                //declaration for name
void input_name(void)
{
    cout << "Please enter your first name:" << '\n';
    cin >> name;
}
void print_name(void)
{
    cout << "this is your first name: \n" << name << '\n';

}
