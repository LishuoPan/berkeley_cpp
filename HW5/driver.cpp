//
// FILENAME: driver.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/5/24
// COMPILER: C++11
// REQUIRED: tdc_d1.cpp, tdclass.h
// PURPOSE: contain the implement of the d2
//
#include "tdclass.h"
int main(){
    d1 distance1;
    d2 distance2;
    d1 distance3;
    d2 distance4;

    cout << "please enter furlongs/yards/feet for the distance1"<<endl;
    cin >> distance1;
    cout << distance1<<endl;
    cout << "please enter kilometers/meters for the distance1"<<endl;
    cin >> distance2;
    cout << distance2<<endl;
    // convert part
    distance3 = d1(distance2);
    distance4 = d2(distance1);


    cout << "now let's convert them into each other..." << endl
         << distance1<<"is as same as: "<<endl<<distance4<<endl
         << distance2<<"is as same as: "<<endl<<distance3<<endl;

}
