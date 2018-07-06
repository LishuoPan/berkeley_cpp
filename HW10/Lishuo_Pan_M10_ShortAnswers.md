# M10_ShortAnswers

#### Lishuo Pan

------

### T1.

the static data members can have visibility restrictions e.g. public, protected, private.

the global variable can be modified without restrictions.

### T2.

you can use the virtual function in the declaration of a certain member function. And we can use declare the same member function in the derived class. And this lead to the result that you can use the member function but invoke different member functions w.r.t the right class you are calling. 

By this way, you can skip the usage of the RTTI, which is not necessarily supported by all compiler.

### T3.

 I google this question and find that:

RTTI can be used to solve the double dispatch problem