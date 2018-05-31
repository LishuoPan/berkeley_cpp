//
// Created by Lishuo Pan on 2018/5/30.
//

#ifndef HW6_INHERITANCE_H
#define HW6_INHERITANCE_H

#include <iostream>
#include <string>
using namespace std;

class person{
public:
    person();
    person(string name,
    string date_of_birth,
    string gender,
    string SSN,
    string address,
    string phone_number);
    virtual void print(void);

    friend istream& operator>>(istream& str,person& p);
protected:
    string name;
    string date_of_birth;
    string gender;
    string SSN;
    string address;
    string phone_number;
};

class employee:public person{
public:
    employee();
    employee(string name,
             string date_of_birth,
             string gender,
             string SSN,
             string address,
             string phone_number,
             string hire_date,
             string salary,
             string location);
    void print(void);
    friend istream& operator>>(istream& str,employee& e);
protected:
    string hire_date;
    string salary;
    string location;
};

class dependent:public person{
public:
    dependent();
    dependent(string name,
             string date_of_birth,
             string gender,
             string SSN,
             string address,
             string phone_number);
    void print(void);
    friend istream& operator>>(istream& str,dependent& d);
protected:
    string SSN;
};

class manager:public employee{
public:
    manager();
    manager(string name,
            string date_of_birth,
            string gender,
            string SSN,
            string address,
            string phone_number,
            string hire_date,
            string salary,
            string location,
            string title);
    void print(void);
    friend istream& operator>>(istream& str,manager& m);

protected:
    string title;
};

class worker:public employee{
public:
    worker();
    worker(string name,
            string date_of_birth,
            string gender,
            string SSN,
            string address,
            string phone_number,
            string hire_date,
            string salary,
            string location,
            string title);
    void print(void);
    friend istream& operator>>(istream& str,worker& w);

protected:
    string project;
};

#endif //HW6_INHERITANCE_H
