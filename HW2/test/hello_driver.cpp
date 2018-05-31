#include "hello_interface.h"
string input_name(void)
{
    string userName;
    cout  << "Please type in your first name and hit \"enter\":  ";
    getline(cin, userName);
    return userName;
}


void print_name( string name )
{
    cout << endl << "Hello your first name is: " << name << endl << endl;
}
