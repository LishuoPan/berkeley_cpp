// MODULE:		dblstk1.h
// PROGRAMMER:	Gary J. Blair
// LANGUAGE:	C++
// DATE:		96/07/03	
//
// PURPOSE:
//		Declarations for class DoubleStack.

#include	<stdlib.h>
#include <iostream>
#include <string>
using namespace std;
template <class T>
class	DoubleStack
{ 
	public:
	 
		// Constructor.
	DoubleStack();
	DoubleStack( size_t	capacity  );
	 
		// Copy Constructor.
	
	DoubleStack( const DoubleStack& rhs );
	
		// Destructor.
		
	~DoubleStack(void);
	
		// Assignment operator=.
		
	DoubleStack&	operator=( DoubleStack& rhs);

		// Add item to stack, making it the topmost item.
		// Return value 1=success/0=failure.

	int	push( T&	item );

		// Remove top item from stack and return it in item.
		// Return value 1=success/0=failure.

	T   pop(void);

		// Determine if the stack is empty.
		// Return value 1=empty/0=non-empty.

	int	empty(void);
	
		// Inquire the capacity of the stack.
		
	size_t	capacity(void);
	
		// Inquire the number of items on the stack.
		
	size_t	size(void);

		// Compare 2 stacks to see if the contain the same data.

	int	operator==( DoubleStack&	rhs );

	void display(void);
    T newelement;
	private:
	T *data;		// Pointer to dynamic stack area.
	size_t stack_size;	// Capacity of stack.
	size_t tos;		// Top of stack. tos==0 ==> empty stack.

};





template <class T>
DoubleStack<T>::DoubleStack() {
    stack_size = 10;
    data = new T[10]();
    tos = 0;
}
template <class T>
DoubleStack<T>::DoubleStack(size_t capacity) {
    stack_size = capacity;
    data = new T[capacity]();
    tos = 0;
}
template <class T>
DoubleStack<T>::DoubleStack(const DoubleStack &rhs) {
    cout<<"Copy constructor called."<<endl;
    stack_size = rhs.stack_size;
    tos = rhs.tos;
    data = new T[rhs.stack_size];

    for(int i=0;i < stack_size; i++){
        data[i] = rhs.data[i];
    }
}
template <class T>
DoubleStack<T>::~DoubleStack() {
    cout<<"deconstructor called"<<endl;
    delete[] data;
}
template <class T>
DoubleStack<T>& DoubleStack<T>::operator=(DoubleStack &rhs) {
    stack_size = rhs.stack_size;
    tos = rhs.tos;

    for (int i = 0; i < stack_size; i++) {
        data[i] = rhs.data[i];
    }
    return *this;
}
template <class T>
int DoubleStack<T>::push(T &item) {
    data[tos] = item;
    tos ++;
    return 0;
}
template <class T>
T DoubleStack<T>::pop(void) {
    return data[--tos];
}
template <class T>
int DoubleStack<T>::empty(void) {
    if(tos == 0){
        return 1;
    }
    return 0;
}
template <class T>
size_t DoubleStack<T>::capacity(void) {
    return stack_size;
}
template <class T>
size_t DoubleStack<T>::size(void) {
    return tos;
}
template <class T>
int DoubleStack<T>::operator==(DoubleStack &rhs) {
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
template <class T>
void DoubleStack<T>::display(void) {
    for(int i=0;i<tos;i++){
        cout<<data[i]<<endl;
    }
}
