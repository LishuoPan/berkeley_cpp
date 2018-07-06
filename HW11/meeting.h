//
// FILENAME: meeting.h
// PROGRAMMER: Lishuo Pan
// DATE: 2018/6/6
// COMPILER: C++11
// REQUIRED: Linklist.h,Linklist.cpp,meeting.cpp,Llmain.cpp
// PURPOSE: header file for meeting.cpp
//


#ifndef		meeting_h
#define		meeting_h

#include	<iostream>
#include	<string>
#include	"linklist.h"
using namespace std;

class meeting : public ListItem
{      
	public:    
	meeting( int year1,int mon1,int day1, int hour1, int min1,
            string people_c,string location_c) {
	    year = year1;
        mon = mon1;
        day = day1;
        hour = hour1;
        min = min1;
        people = people_c;
        location = location_c;
	};
	virtual	int		CompareByInsertKey( ListItem* item_in_list );
	virtual void	print();	
	virtual	ListItem*	Clone();

	
	private:
    int year;
    int mon;
    int day;
    int hour;
    int min;
    string people;
    string location;
}; 

#endif






