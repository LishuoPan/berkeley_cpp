// FILENAME: hello_interface.h
// PROGRAMMER: Lishuo Pan
// DATE: 03/29/2018
// COMPILER: Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED: hello_interface.h hello_driver.cpp
// PURPOSE:
//     User interface. contain the main() function
#include "hello_interface.h"
#include <iostream>         // allow use of cin cout
int main()                  //the main function
{
    input_name();           // invoke the input_name
    print_name();           // invoke the print_name
    return 0;
}
