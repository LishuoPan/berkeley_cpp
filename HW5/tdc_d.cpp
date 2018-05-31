//
// FILENAME: tdc_d.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/5/24
// COMPILER: C++11
// REQUIRED: tdc_d2.cpp, tdclass.h
// PURPOSE: contain the implement of the d1
//

#include "tdclass.h"

d1::d1(int f, int y, double fe) {
    total_feet = 660*f+3*y+fe;
    furlongs = floor(total_feet/660);
    yards = floor((total_feet - 660*furlongs)/3);
    feet = total_feet -660*furlongs -3*yards;
}

d1::d1(d2 &d) {
    total_feet = d.read_meter() * 3.28;
    furlongs = floor(total_feet/660);
    yards = floor((total_feet - 660*furlongs)/3);
    feet = total_feet -660*furlongs -3*yards;

}
d1& d1::operator=(d2 &d) {
    total_feet = d.read_meter() * 3.28;
    furlongs = floor(total_feet/660);
    yards = floor((total_feet - 660*furlongs)/3);
    feet = total_feet -660*furlongs -3*yards;
    return (*this);
}
ostream& operator<<(ostream &str, d1 &d) {
    str <<  d.furlongs << " furlongs "
        << d.yards << " yards "
        << d.feet << " feet"<<endl;
    return str;
}

istream& operator>>(istream& str, d1& d){
    int f;
    int y;
    double fe;
    cout<<"enter the furlongs:"<<endl;
    str >> f;
    cout<<"enter the yards:"<<endl;
    str >> y;
    cout<<"enter the feet:"<<endl;
    str >> fe;
    d = d1(f,y,fe);
    return str;

}

double d1::read_feet() {
    return total_feet;
}

d2::d2(int km, double m) {
    total_meter = 1000*km+m;
    kilometers = floor(total_meter/1000);
    meters = total_meter - 1000*kilometers;
}

//convertor
d2::d2(d1 &d) {
    total_meter = d.read_feet()/3.28;
    kilometers = floor(total_meter/1000);
    meters = total_meter - kilometers*1000;
}
d2& d2::operator=(d1 &d) {
    total_meter = d.read_feet()/3.28;
    kilometers = floor(total_meter/1000);
    meters = total_meter - kilometers*1000;
    return (*this);
}

ostream& operator<<(ostream &str, d2 &d) {
    str <<  d.kilometers << " kilometers "
        << d.meters << " meters "<<endl;
    return str;
}

istream& operator>>(istream& str, d2& d){
    int km;
    double m;
    cout<<"enter the kilometers:"<<endl;
    str >> km;
    cout<<"enter the meters:"<<endl;
    str >> m;
    d = d2(km,m);
    return str;

}

// read total_meter
double d2::read_meter() {
    return total_meter;
}
