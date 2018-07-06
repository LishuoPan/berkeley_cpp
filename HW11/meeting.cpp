//
// FILENAME: meeting.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/6/6
// COMPILER: C++11
// REQUIRED: Linklist.h,Linklist.cpp,meeting.h,Llmain.cpp
// PURPOSE: Implement for meeting class
//

#include	"meeting.h"
using namespace std;

		// Clone the item.

ListItem*	meeting::Clone()
{
	meeting		*p;

	p = new meeting(year,
    mon,
    day,
    hour,
    min,
    people,
    location);
	return	(ListItem *) p;
}

int		meeting::CompareByInsertKey( ListItem* item_in_list )
{

	if(this->year < ((meeting *)item_in_list)->year){
        return -1;
	}
	if(this->year > ((meeting *)item_in_list)->year){
        return 1;
	}

    if(this->mon < ((meeting *)item_in_list)->mon){
        return -1;
    }
    if(this->mon > ((meeting *)item_in_list)->mon){
        return 1;
    }
    if(this->day < ((meeting *)item_in_list)->day){
        return -1;
    }
    if(this->day > ((meeting *)item_in_list)->day){
        return 1;
    }
    if(this->hour < ((meeting *)item_in_list)->hour){
        return -1;
    }
    if(this->hour > ((meeting *)item_in_list)->hour){
        return 1;
    }
    if(this->min < ((meeting *)item_in_list)->min){
        return -1;
    }
    if(this->min > ((meeting *)item_in_list)->min){
        return 1;
    }
    else{ return 0;}
} 

void	meeting::print()
{
    cout<<"meeting date is:"<< year <<"/"<<mon<<"/"<<day<<endl;
    cout<<"meeting time is:  "<< hour <<":"<<min<<endl;
    cout<<"meeting people are:"<< people <<endl;
    cout<<"meeting location is:"<< location <<endl<<endl;
}


