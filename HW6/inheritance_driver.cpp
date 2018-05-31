//
// Created by Lishuo Pan on 2018/5/30.
//

#include "inheritance.h"
int menu(void);
int menu_addition(void);
int main(void) {
    int role;
    int op;
    person p1;
    employee e1;
    dependent d1;
    manager m1;
    worker w1;

    int end_point = 1;
    int end_point_second;
    while (end_point) {
        role = menu();
        switch (role) {
            case 1:
                end_point_second = 1;
                cout << "You choose person..." << endl;
                while (end_point_second) {
                    op = menu_addition();
                    switch (op) {
                        case 1:
                            cin >> p1;
                            break;
                        case 2:
                            p1.print();
                            break;
                        case 3:
                            end_point_second = 0;
                            break;
                        default:
                            cout << "ops! we don't offer this option" << endl;
                            break;
                    }
                }
                break;
            case 2:
                end_point_second = 1;
                cout << "You choose employee..." << endl;
                while (end_point_second) {
                    op = menu_addition();
                    switch (op) {
                        case 1:
                            cin >> e1;
                            break;
                        case 2:
                            e1.print();
                            break;
                        case 3:
                            end_point_second = 0;
                            break;
                        default:
                            cout << "ops! we don't offer this option" << endl;
                            break;
                    }
                }
                break;
            case 3:
                end_point_second = 1;
                cout << "You choose dependent..." << endl;
                while (end_point_second) {
                    op = menu_addition();
                    switch (op) {
                        case 1:
                            cin >> d1;
                            break;
                        case 2:
                            d1.print();
                            break;
                        case 3:
                            end_point_second = 0;
                            break;
                        default:
                            cout << "ops! we don't offer this option" << endl;
                            break;
                    }
                }
                break;
            case 4:
                end_point_second = 1;
                cout << "You choose manager..." << endl;
                while (end_point_second) {
                    op = menu_addition();
                    switch (op) {
                        case 1:
                            cin >> m1;
                            break;
                        case 2:
                            m1.print();
                            break;
                        case 3:
                            end_point_second = 0;
                            break;
                        default:
                            cout << "ops! we don't offer this option" << endl;
                            break;
                    }
                }
                break;
            case 5:
                end_point_second = 1;
                cout << "You choose worker..." << endl;
                while (end_point_second) {
                    op = menu_addition();
                    switch (op) {
                        case 1:
                            cin >> w1;
                            break;
                        case 2:
                            w1.print();
                            break;
                        case 3:
                            end_point_second = 0;
                            break;
                        default:
                            cout << "ops! we don't offer this option" << endl;
                            break;
                    }
                }
                break;
            case 6:
                cout<<"Thanks for using our system!"<<endl;
                end_point =0;
                break;
            default:
                cout << "ops! we don't offer this option" << endl;
                break;
        }

    }
    return 0;
}

int menu(void){
    cout<<"please choose an rule:"<<endl;
    cout<<"1. person"<<endl;
    cout<<"2. employee"<<endl;
    cout<<"3. dependent"<<endl;
    cout<<"4. manager"<<endl;
    cout<<"5. worker"<<endl;
    cout<<"6. quit"<<endl;
    int role;
    cout<<"your option goes here:"<<endl;
    cin>>role;
    return role;
}

int menu_addition(void){
    cout<<"please choose an action:"<<endl;
    cout<<"1. fill in the information for this person"<<endl;
    cout<<"2. show current statement"<<endl;
    cout<<"3. go back to last menu"<<endl;
    int op;
    cout<<"your option goes here:"<<endl;
    cin>>op;
    return op;
}

