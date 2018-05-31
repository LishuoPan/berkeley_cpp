// FILENAME: hello_interface.h
// PROGRAMMER: Lishuo Pan
// DATE: 03/29/2018
// COMPILER: Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED: hello_interface.h hello_driver.cpp
// PURPOSE:
//     User interface. contain the main() function
#include "hello_interface.h"                // include the header file
int main(void)
{
    string user_name  =  input_name( );     // invoke the input_name() and save 
                                            // the return to a string named user_name
    print_name( user_name );                // invok the user_name()
    return 0;
}
