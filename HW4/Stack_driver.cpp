//
// FILENAME: Stack_driver.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/5/22
// COMPILER: C++11
// REQUIRED: Dblstk.h, tdc_d2.cpp
// PURPOSE: driver file
//
#include "Dblstk1.h"
using namespace std;
int menu(void);

int main(){
    int op;
    DoubleStack stack1;
    DoubleStack stack2;
    int end_point = 1;
    while(end_point) {
        op = menu();
        switch (op) {
            case 1:
                cout<<"this is your stack:"<<endl;
                stack1.display();
                break;
            case 2:
                double item;
                cout << "which double number you want to push in:" << endl;
                cin >> item;
                stack1.push(item);
                break;
            case 3:
                stack1.pop();
                break;
            case 4:
                cout<<"the total capacity is:"<<endl;
                cout<<stack1.capacity()<<endl;
                break;
            case 5:
                cout<<"the total number in the stack1 is:"<<endl;
                cout<<stack1.size()<<endl;
                break;
            case 6:
                stack2 = stack1;
                break;
            case 7:
                if(stack2 == stack1){
                    cout<<"Yes, the stack1 is as same as stack2."<<endl;
                    break;
                }
                cout<<"No, the stack1 is NOT as same as stack2."<<endl;
                break;
            case 8:
                cout<<"Thanks for using our system!"<<endl;
                end_point =0;
                break;
            default:
                cout << "ops! we don't offer this option"<<endl;
        }
    }
}
int menu(void){
    cout<<"please choose an option:"<<endl;
    cout<<"1. Display stack 1"<<endl;
    cout<<"2. a double value onto the top of stack 1"<<endl;
    cout<<"3. Remove a value from the top of stack 1"<<endl;
    cout<<"4. Check the total capacity stack 1"<<endl;
    cout<<"5. Check current number of items on stack 1"<<endl;
    cout<<"6. Copy stack 1 to stack 2"<<endl;
    cout<<"7. Check to see if the two stacks are equal"<<endl;
    cout<<"8. Quit"<<endl;
    int op;
    cout<<"your option goes here:"<<endl;
    cin>>op;
    return op;
}
