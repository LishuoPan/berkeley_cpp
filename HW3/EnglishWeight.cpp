// FILENAME: EnglishWeight.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 4/14/2018
// COMPILER: Apple LLVM version 9.1.0 (clang-902.0.39.1)
// REQUIRED: EnglishWeight.h
// PURPOSE: implement for the EnglishWeight class
#include <iostream>
#include <math.h>
#include "EnglishWeight.h"
using namespace std;

EnglishWeight::EnglishWeight()
{
    pound = 0;
    ounces = 0;
}


EnglishWeight::EnglishWeight(int po, double ou)
{
    pound = po;
    ounces = ou;
}

double EnglishWeight::change2ounces()
{
    double total_ounces;
    total_ounces = ounces + pound * 16;
    return total_ounces;
}
EnglishWeight EnglishWeight::total_ounces2obj(double total_ounces)
{
    int po;
    double ou;
    po = int(floor(total_ounces/16));
    ou = total_ounces - 16*po;
    return EnglishWeight(po,ou);
}

EnglishWeight EnglishWeight::operator + (EnglishWeight &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = this->change2ounces()+ rhs.change2ounces();
    obj = obj.total_ounces2obj(total_ounces);
    return obj;
}

EnglishWeight EnglishWeight::operator - (EnglishWeight &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = this->change2ounces()- rhs.change2ounces();
    if(total_ounces<0)
    {
        cerr << "the weight1 is smaller than weight2, please enter anthor set of weight.\n";
    }
    else
    {
        obj = obj.total_ounces2obj(total_ounces);
    }
    return obj;

}

EnglishWeight EnglishWeight::operator / (EnglishWeight &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = this->change2ounces() / rhs.change2ounces();
    obj = obj.total_ounces2obj(total_ounces);
    return obj;
}

EnglishWeight EnglishWeight::operator * (double &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = this->change2ounces()* rhs;
    obj = obj.total_ounces2obj(total_ounces);
    return obj;
}

EnglishWeight operator * (double &lhs,EnglishWeight &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = lhs*rhs.change2ounces();
    obj = obj.total_ounces2obj(total_ounces);
    return obj;
}

EnglishWeight EnglishWeight::operator / (double &rhs)
{
    EnglishWeight obj(0,0);
    double total_ounces;
    total_ounces = this->change2ounces()/ rhs;
    obj = obj.total_ounces2obj(total_ounces);
    return obj;
}

ostream& operator << (ostream& str, EnglishWeight& w)
{
    str << w.pound << " pound " << w.ounces << " ounces " << endl;
    return str;
}


istream& operator >> (istream& str, EnglishWeight& w)
{
    str >> w.pound;
    if (str.get() != 'p')
    {
       cerr << "*** Error extracting weight.\n";
       exit(1);
    }
    str >> w.ounces;
    if (str.get() != 'o')
    {
       cerr << "*** Error extracting weight.\n";
       exit(1);
    }

    return str;
}
