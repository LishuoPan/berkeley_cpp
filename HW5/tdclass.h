//
// FILENAME: tdclass.h
// PROGRAMMER: Lishuo Pan
// DATE: 2018/5/24
// COMPILER: C++11
// REQUIRED: tdc_d1.cpp, tdc_d2.cpp
// PURPOSE: contain the class declare of the d1 & d2

//

#ifndef HW5_TDCLASS_H
#define HW5_TDCLASS_H

#include <math.h>
#include <iostream>
using namespace std;
class d1;
class d2;
class d1
{
public:
    // constructor
    d1(){furlongs = 0; yards = 0; feet =0;};
    d1(int f, int y,double fe);
    // convertor
    d1(d2& d);
    // assignment
    d1& operator=(d2& d);
    // cout
    friend ostream& operator<<(ostream& str,d1& d);
    friend istream&operator>>(istream& str,d1& d);
    // read total_feet
    double read_feet();
private:
    int furlongs;
    int yards;
    double feet;
    double total_feet;
};

class d2
{
public:
    // constructor
    d2(){kilometers = 0; meters = 0;};
    d2(int km, double m);
    //convertor
    d2(d1& d);
    // assignment
    d2& operator=(d1& d);
    // cout
    friend ostream& operator<<(ostream& str,d2& d);
    friend istream&operator>>(istream& str,d2& d);
    // read total_meter
    double read_meter();

private:
    int kilometers;
    double meters;
    double total_meter;
};


#endif //HW5_TDCLASS_H
