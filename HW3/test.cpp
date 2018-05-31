#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;
int main()
{
    int a = 1;
    double b = 7.0;
    cout << typeid(b - a).name()<<endl;

}
