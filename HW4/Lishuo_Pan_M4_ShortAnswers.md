# M4 Short Answers

### Lishuo Pan

---

### T1.

​	the `new` operator in c++ is a operator and `malloc` is a function in c. Using the `new` operator, the complier will automatically decide the size the datatype we want to allocate. However, we have to specify the specific size of the data in the `malloc` function in c.

### T2.

XXX.h

class temp

{

public:

​	...

​	DynamicIntArray( const DynamicIntArray& rhs );//this is a copy constructor. in the .h file

​	...

}

NOTE: abc here is a class

- the copy constructor take the reference of  an object of the class as its rhs parameter.
- In the main code: abc a(d). This is code constructor invoked to pass d, d is an object.
- Initialization: abc a = d. This is copy constructor in initialization.

### T3.

NOTE: abc here is a class

- copy constructor: We consider it as copy constructor when we initialize the object like this: abc a = d.The copy constructor is `creating` the duplicate variable. the copy constructor is used in following situation:
  - When a class object is passed to a function by value
  - When a function must return a class object as its result
  - When one object is declared and initialized to an existing object
- overloaded assignment operator: abc a,b; b = abc(); a = b//this here is a  overloaded assignment operator. The operator = is assigning to a value to an `existing` target variable.

### T4.

the copy constructor is used in following situations:

- When a class object is passed to a function by value
- When a function must return a class object as its result
- When one object is declared and initialized to an existing object

### T5.

because we overload the operator [] for the class. So the operater [] is possible for use in our new class and its object. And in the implentation the for the operater [] overload, we apply the [] to the int[] datatype which supports operater [].