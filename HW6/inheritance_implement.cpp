//
// FILENAME: inheritance_implement.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/5/30
// COMPILER: C++11
// REQUIRED: inheritance_driver.cpp, inheritance.h
// PURPOSE: contain the class implement
//
#include "inheritance.h"

person::person() {
    name = "NA";
    date_of_birth = "NA";
    gender = "NA";
    SSN = "NA";
    address = "NA";
    phone_number = "NA";
}

person::person(string name1,
               string date_of_birth1,
               string gender1,
               string SSN1,
               string address1,
               string phone_number1) {
    name = name1;
    date_of_birth = date_of_birth1;
    gender = gender1;
    SSN = SSN1;
    address = address1;
    phone_number = phone_number1;
}
void person::print() {
    cout<< "NAME:\n"<<name<<endl;
    cout<< "birthday:\n"<<date_of_birth<<endl;
    cout<< "gender:\n"<<gender<<endl;
    cout<< "SSN:\n"<<SSN<<endl;
    cout<< "address:\n"<<address<<endl;
    cout<< "phone number:\n"<<phone_number<<endl;
}
istream& operator>>(istream &str, person &p) {
    string name;
    string date_of_birth;
    string gender;
    string SSN;
    string address;
    string phone_number;
    // enter name of person
    cout << "please enter the name of the person:\n";
    str >> name;
    p.name = name;

    // enter date_of_birth
    cout << "please enter the birthday of the person(YYYY/MM/DD)"
            "(if not available input NA):\n";
    str >> date_of_birth;
    p.date_of_birth = date_of_birth;

    // enter gender
    cout << "please enter the gender of the person(if not available input NA):\n";
    str >> gender;
    p.gender = gender;

    // enter SSN
    cout << "please enter the SSN of the person(if not available input NA):\n";
    str >> SSN;
    p.SSN = SSN;

    // enter address
    cout << "please enter the address of the person(if not available input NA):\n";
    str >> address;
    p.address = address;

    // enter phone#
    cout << "please enter the phone number of the person(if not available input NA):\n";
    str >> phone_number;
    p.phone_number = phone_number;

    return str;
}

employee::employee():person() {
    hire_date = "NA";
    salary = "NA";
    location = "NA";
    phone_number = "NA";
}
employee::employee(string name1,
                     string date_of_birth1,
                     string gender1,
                     string SSN1,
                     string address1,
                     string phone_number1,
                     string hire_date1,
                     string salary1,
                     string location1)
        :person(name1, date_of_birth1, gender1, SSN1, address1, phone_number1){
    hire_date = hire_date1;
    salary = salary1;
    location = location1;
    phone_number = phone_number1;
}

void employee::print() {
    person::print();
    cout<< "hire date:\n"<<hire_date<<endl;
    cout<< "salary:\n"<<salary<<endl;
    cout<< "location:\n"<<location<<endl;
}

istream& operator>>(istream &str, employee &e) {
    person *p_temp;
    p_temp = &e;
    cin >> *p_temp;
    string hire_date;
    string salary;
    string location;
    // enter hire date
    cout << "please enter the hire date of the person(if not available input NA):\n";
    str >> hire_date;
    e.hire_date = hire_date;
    // enter gender
    cout << "please enter the salary of the person(if not available input NA):\n";
    str >> salary;
    e.salary = salary;
    // enter gender
    cout << "please enter the location of the person(if not available input NA):\n";
    str >> location;
    e.location = location;
    return str;
}


dependent::dependent():person() {
    SSN = "NA";
}
dependent::dependent(string name1,
                   string date_of_birth1,
                   string gender1,
                   string SSN1,
                   string address1,
                   string phone_number1)
        :person(name1, date_of_birth1, gender1, SSN1, address1, phone_number1){
}

void dependent::print() {
    person::print();
}

istream& operator>>(istream &str, dependent &d) {
    string changed_SSN;
    person *p_temp;
    p_temp = &d;
    cin >> *p_temp;
    // change SSN
    cout << "Changed SSN:\n";
    str>>changed_SSN;
    d.SSN = changed_SSN;
    return str;

}

manager::manager():employee() {
    title = "NA";
}
manager::manager(string name1,
                 string date_of_birth1,
                 string gender1,
                 string SSN1,
                 string address1,
                 string phone_number1,
                 string hire_date1,
                 string salary1,
                 string location1,
                 string title1)
        :employee(name1, date_of_birth1,
                  gender1, SSN1, address1,
                  phone_number1,hire_date1,
                  salary1,location1){
    title = title1;
}

void manager::print() {
    employee::print();
    cout<< "title:\n"<<title<<endl;
}

istream& operator>>(istream &str, manager &m) {
    employee *p_temp;
    p_temp = &m;
    cin >> *p_temp;
    string title;
    // enter title
    cout << "please enter the title of the person(if not available input NA):\n";
    str >> title;
    m.title = title;
    return str;
}

worker::worker():employee() {
    project = "NA";
}
worker::worker(string name1,
                 string date_of_birth1,
                 string gender1,
                 string SSN1,
                 string address1,
                 string phone_number1,
                 string hire_date1,
                 string salary1,
                 string location1,
                 string project1)
        :employee(name1, date_of_birth1,
                  gender1, SSN1, address1,
                  phone_number1,hire_date1,
                  salary1,location1){
    project = project1;
}

void worker::print() {
    employee::print();
    cout<< "project:\n"<<project<<endl;
}

istream& operator>>(istream &str, worker &w) {
    employee *p_temp;
    p_temp = &w;
    cin >> *p_temp;
    string project;
    // enter title
    cout << "please enter the project of the person(if not available input NA):\n";
    str >> project;
    w.project = project;
    return str;
}
