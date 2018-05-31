// FILENAME: hello_interface.h
// PROGRAMMER: Lishuo Pan
// DATE: 03/29/2018
// COMPILER: Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED: hello_interface.h
// PURPOSE:
//      a header file for the hello_driver.cpp & hello_interface.cpp
//      contain the function declaration and variable declaration

#ifndef HELLO_INTERFACE_H
#define HELLO_INTERFACE_H

#include <iostream>
#include <string>
using namespace std;                // import the std

string input_name();                // the function prototype for input_name
void print_name( string name );     // the function prototype for print_name

#endif
