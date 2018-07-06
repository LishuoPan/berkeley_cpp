// MODULE:		llmain.cpp			
// PROGRAMMER:	Gary J. Blair
// LANGUAGE:	C++
// DATE:		97/08/04
//
// PURPOSE:                       
//      Demonstrate Lists.

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

	iter = new ListIterator(l);
	while (p=(meeting *)(iter->NextItemInList()))
		p->print();
	delete iter;

	return 0;
}                                                







