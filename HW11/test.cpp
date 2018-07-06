//
// FILENAME: test.cpp
// PROGRAMMER: Lishuo Pan
// DATE: 2018/6/6
// COMPILER: C++11
// REQUIRED: Linklist.h,Linklist.cpp,meeting.h,meeting.cpp,Llmain.cpp
// PURPOSE: a small test file
//
#include	<iostream>
#include	<string.h>
#include	"linklist.h"
#include    "meeting.h"
using namespace std;

int	main(void)
{
    meeting			*p, *p1,*p2,*p3;
    List			l;
    ListIterator	*iter;

//	List			*cloned_list;

    p1 = new meeting(2018,6,3,10,30,"Kmetz, Rhonda","TB103");		l.Insert(p1);
    p2 = new meeting(2017,9,1,9,01,"Jones, Tom","TB103");		l.Insert(p2);
    p3 = new meeting(2018,6,2,14,20,"Phillips, Bob","TB103");		l.Insert(p3);

    cout<<"if the code is right, the people order should be:\n"
          <<"Jones, Tom\n"<<"Phillips, Bob\n"<<"Kmetz, Rhonda\n"<<endl;
    iter = new ListIterator(l);
    while (p=(meeting *)(iter->NextItemInList()))
        p->print();
    delete iter;

    return 0;
}