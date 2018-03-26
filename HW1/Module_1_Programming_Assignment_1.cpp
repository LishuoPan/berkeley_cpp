// FILENAME:   Module_1_Programming_Assignment_1.cpp
// PROGRAMMER: Lishuo Pan
// DATE:       03/26/2018
// COMPILER:   Apple LLVM version 9.0.0 (clang-900.0.39.2)
// REQUIRED:   Module_1_Programming_Assignment_1.cpp
// PURPOSE:
//    Illustrate the basic form of a C++ program.
//    Illustrate the use of // which means what follows is a comment.
//    Illustrate the use of << which is used to output stuff.

#include <iostream>         // Allows use of << and >> operators.
using namespace std;        // Eliminates need for std as in std::cout

int main( void )
{
    const int namelen = 30;
    char name[namelen];
    cout << "Please type your name:" << endl;
    cin.getline(name, namelen);
    cout  << "Your name is:"<< endl << name << endl;

    system("pause");   // required by some compilers to keep output window open.
    return 0;
}
