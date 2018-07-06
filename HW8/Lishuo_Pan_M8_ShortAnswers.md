# M8_ShortAnswers

#### Lishuo Pan

------

### T1.

because setjmp and longjmp are incompatible with many C++ features, such as automatically invoking destructors for objects when they go out of scope. So we do not use setjmp and longjmp in the C++. Instead, we use the  exceptions to perform error handing.

### T2.

 Yes, one exception class can be a base class and if you want to blend its feature into the new class, you can derive your classes from this exception class.

You can also create your own exception class by inheriting and overriding exception class functionality.



### T3.

1. when the size of the code increases, error handing is more difficult to track.
2. Bad memory, system crashes, segmentation faults are hard to track from error handling.
3. for known error conditions, it is easy to assign the handing but for the run time dynamic faults, it's hard to handle them

### T4.

No, you can not. The catch block will catch all the exceptions thrown in the try block.

### T5.

For EnglishWeight class, I want to define these exceptions:

1. if the weight given is a negtive number, then throw an error.
2. if you use the wrong data type to store the data, throw an error.