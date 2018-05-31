// FILENAME: EW_Drive.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 4/14/2018
// COMPILER: Apple LLVM version 9.1.0 (clang-902.0.39.1)
// REQUIRED: EnglishWeight.cpp EnglishWeight.h
// PURPOSE: a test file for user.


#include <iostream>
#include <math.h>
#include "EnglishWeight.h"
using namespace std;

int main()
{
    EnglishWeight weight1(0,0);
    EnglishWeight weight2(0,0);
    EnglishWeight temp;
    double number;
    cout << "please enter the first weight (e.g. 1p1o):\n";
    cin >> weight1;
    cin >> weight2;
    cin >> number;
    cout<<endl;
    cout <<"your weights are:\n"<< weight1<<"and\n"<<weight2<<endl<<"your number is:\n"<<number<<endl<<endl;

    temp = weight1+weight2;
    cout<<weight1 << "+" << weight2 <<"=" << temp<<endl;

    temp = weight1-weight2;
    cout<< weight1 << "-" << weight2 <<"=" << temp<<endl;

    temp = weight1/weight2;
    double temp1;
    temp1 = temp.change2ounces();
    cout<<weight1 << "/" << weight2 <<"=" << temp1<<endl<<endl;

    temp = weight1*number;
    cout << weight1 << "*" << number<<endl <<"=" << temp<<endl;
    temp = weight2*number;
    cout << weight2 << "*" << number<<endl <<"=" << temp<<endl;

    temp = number*weight1;
    cout << number << "*" << weight1<<endl <<"=" << temp<<endl;

    temp = number*weight2;
    cout << number << "*" << weight2<<endl <<"=" << temp<<endl;


    temp = weight1/number;
    cout  << weight1 << "/" << number<<endl <<"=" << temp<<endl;


    temp = weight2/number;
    cout  << weight2 << "/" << number<<endl <<"=" << temp<<endl;


    return 0;
}
