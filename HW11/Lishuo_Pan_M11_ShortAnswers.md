# M11_ShortAnswers

#### Lishuo Pan

------

### T1.

In the person.h, there are some specific variables:

```c++
char name[50];	// Person's name.
unsigned long ssn;		// Social security number.
```

These two variables can be introduced as templates parameters.

### T2.

On one hand, while using inheritance per example, the code is more specific, and relatively simple, however, if you use the templates, the code can be more abstract. 

On the other hand, if you use the templates, then you can make your code more general. And fit into different applications.

### T3.

when you create a ListIterator. It will point to the current generator.

But before you iterate through the list, if you do the delete, it will change the generator.

Now, when you go back and iterate the list, something bad will happen.

I think, why not using a for loop to iterate through the list?

I think this is a foolproof answer, since it loop through once for all. So this should be foolproof.