// FILENAME: EnglishWeight.h
// PROGRAMMER: Lishuo Pan
// DATE: 4/14/2018
// COMPILER: Apple LLVM version 9.1.0 (clang-902.0.39.1)
// REQUIRED: EnglishWeight.cpp
// PURPOSE: contain the class declare of the EnglishWeight

using namespace std;

class EnglishWeight
{
private:
    int pound;
    double ounces;
public:
    EnglishWeight();
    EnglishWeight(int, double);
    EnglishWeight operator + (EnglishWeight &rhs);
    EnglishWeight operator - (EnglishWeight &rhs);
    EnglishWeight operator / (EnglishWeight &rhs);
    EnglishWeight operator * (double &rhs);
    friend EnglishWeight operator * (double &lhs, EnglishWeight &rhs);
    EnglishWeight operator / (double &rhs);
    double change2ounces();
    EnglishWeight total_ounces2obj(double);
    friend ostream& operator << (ostream& str, EnglishWeight& w);
    friend istream& operator >> (istream& str, EnglishWeight& w);
};
