//
// FILENAME: Stk.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/6/3
// COMPILER: C++11
// REQUIRED: Dblstk.h, tdc_d2.cpp
// PURPOSE: contain the class implement
//
#include "Dblstk1.h"
using namespace std;
DoubleStack::DoubleStack() {
    stack_size = 10;
    data = new double[10]();
    tos = 0;
}
DoubleStack::DoubleStack(size_t capacity) {
    stack_size = capacity;
    data = new double[capacity]();
    tos = 0;
}

DoubleStack::DoubleStack(const DoubleStack &rhs) {
    cout<<"Copy constructor called."<<endl;
    stack_size = rhs.stack_size;
    tos = rhs.tos;
    data = new double[rhs.stack_size];

    for(int i=0;i < stack_size; i++){
        data[i] = rhs.data[i];
    }
}
DoubleStack::~DoubleStack() {
    cout<<"deconstructor called"<<endl;
    delete[] data;
}

DoubleStack& DoubleStack::operator=(DoubleStack &rhs) {
    stack_size = rhs.stack_size;
    tos = rhs.tos;

    for (int i = 0; i < stack_size; i++) {
        data[i] = rhs.data[i];
    }
    return *this;
}

int DoubleStack::push(double &item) {
    data[tos] = item;
    tos ++;
    return 0;
}

int DoubleStack::pop(void) {
    return data[--tos];
}

int DoubleStack::empty(void) {
    if(tos == 0){
        return 1;
    }
    return 0;
}

size_t DoubleStack::capacity(void) {
    return stack_size;
}

size_t DoubleStack::size(void) {
    return tos;
}
int DoubleStack::operator==(DoubleStack &rhs) {
    if(stack_size == rhs.stack_size){
        for(int i=0;i<stack_size;i++){
            if(data[i] != rhs.data[i]){
                return 0;
            }
        }
    return 1;
    }
    return 0;
}

void DoubleStack::display(void) {
    for(int i=0;i<tos;i++){
        cout<<data[i]<<endl;
    }
}
