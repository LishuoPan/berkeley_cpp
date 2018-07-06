//
// FILENAME: HW7.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/6/2
// COMPILER: C++11
// REQUIRED:
// PURPOSE: contain whole program.
//
#include <iostream>
#include <string>
using namespace std;
class vehicle{
public:
    virtual string tras_mode() = 0;

    virtual void print_tras_mode(void) = 0;
    virtual void print_id(void)= 0;
    virtual void print_e_w(void)= 0;
    virtual void print_m_g_w(void)= 0;
    virtual void print_m_r(void)= 0;
    virtual void print_m_s(void)= 0;
protected:
    string id;
    int e_w;
    int m_g_w;
    int m_r;
    int m_s;
};

class airplane:public vehicle{
public:
    airplane(string i= "air-fly-cool",int a= 100,int b= 150,int c= 60,int d= 100){
        id = i;
        e_w = a;
        m_g_w = b;
        m_r = c;
        m_s = d;}

    string tras_mode(){return "by-air";};

    void print_tras_mode(void);
    void print_id(void);
    void print_e_w(void);
    void print_m_g_w(void);
    void print_m_r(void);
    void print_m_s(void);
};

void airplane::print_tras_mode() {
    cout<<"the curent transportation mode is: \n"
          << this->tras_mode()<<endl;
}

void airplane::print_id() {
    cout<<"the plane's identification information is:\n"
          <<id<<endl;
}

void airplane::print_e_w() {
    cout<<"the plane's empty weight is:\n"
        <<e_w<<endl;
}
void airplane::print_m_g_w() {
    cout<<"the plane's maximum gross weight is:\n"
        <<m_g_w<<endl;
}

void airplane::print_m_r() {
    cout<<"the plane's maximum range is:\n"
        <<m_r<<endl;
}
void airplane::print_m_s() {
    cout<<"the plane's maximum speed is:\n"
        <<m_s<<endl;
}



class boat:public vehicle{
public:
    boat(string i= "water-speed",int a= 80,int b= 100,int c= 30,int d= 70){
        id = i;
        e_w = a;
        m_g_w = b;
        m_r = c;
        m_s = d;}

    string tras_mode(){return "by-water";};

    void print_tras_mode(void);
    void print_id(void);
    void print_e_w(void);
    void print_m_g_w(void);
    void print_m_r(void);
    void print_m_s(void);
};

void boat::print_tras_mode() {
    cout<<"the curent transportation mode is: \n"
        << this->tras_mode()<<endl;
}

void boat::print_id() {
    cout<<"the boat's identification information is:\n"
        <<id<<endl;
}

void boat::print_e_w() {
    cout<<"the boat's empty weight is:\n"
        <<e_w<<endl;
}
void boat::print_m_g_w() {
    cout<<"the boat's maximum gross weight is:\n"
        <<m_g_w<<endl;
}

void boat::print_m_r() {
    cout<<"the boat's maximum range is:\n"
        <<m_r<<endl;
}
void boat::print_m_s() {
    cout<<"the boat's maximum speed is:\n"
        <<m_s<<endl;
}


class car:public vehicle{
public:
    car(string i= "land-is-yours",int a= 20,int b= 40,int c= 10,int d= 50){
        id = i;
        e_w = a;
        m_g_w = b;
        m_r = c;
        m_s = d;}

    string tras_mode(){return "by-land";};

    void print_tras_mode(void);
    void print_id(void);
    void print_e_w(void);
    void print_m_g_w(void);
    void print_m_r(void);
    void print_m_s(void);
};

void car::print_tras_mode() {
    cout<<"the curent transportation mode is: \n"
        << this->tras_mode()<<endl;
}

void car::print_id() {
    cout<<"the car's identification information is:\n"
        <<id<<endl;
}

void car::print_e_w() {
    cout<<"the car's empty weight is:\n"
        <<e_w<<endl;
}
void car::print_m_g_w() {
    cout<<"the car's maximum gross weight is:\n"
        <<m_g_w<<endl;
}

void car::print_m_r() {
    cout<<"the car's maximum range is:\n"
        <<m_r<<endl;
}
void car::print_m_s() {
    cout<<"the car's maximum speed is:\n"
        <<m_s<<endl;
}
int main(){
    // this will inquire the detailed information of the plane
    airplane p1;
    p1.print_tras_mode();
    p1.print_id();
    p1.print_e_w();
    p1.print_m_g_w();
    p1.print_m_r();
    p1.print_m_s();
    boat b1;
    b1.print_tras_mode();
    b1.print_id();
    b1.print_e_w();
    b1.print_m_g_w();
    b1.print_m_r();
    b1.print_m_s();
    car c1;
    c1.print_tras_mode();
    c1.print_id();
    c1.print_e_w();
    c1.print_m_g_w();
    c1.print_m_r();
    c1.print_m_s();
    return 0;
}