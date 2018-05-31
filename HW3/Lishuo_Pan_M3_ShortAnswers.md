# M3_ShortAnswers

#### Lishuo Pan

---

### T1.

A class is like a recipe of the object. An object is a instance of the class. In the class, it define all the public and private functions and variables. In the object, you can simply invoke the function(method) defined by the class and store the corresponding variable for the object.

### T2.

the private variables can only accessed by the public functions. So for the main code. You can not simply change the variable anywhere. This can reduce the bug. And if bug happens, you can just look at the class source file rather than go through every line in your main code to check where you accidentally modify the private variables.

### T3.

In my understanding: 

- structure are a field of data: you define the data type of the certain variables and declare it as a structure. So, where you use a structure you automatically contain all the data you declare. It's very convenient when the several variables you declare has the same structure.
- the class different from a structure that: the class has the method which play the role of behavior of the data. You can manipulate an object simply through its method. And they also declare the variable you need.

### T4.

- `advantage`: if there are many times you want to use the functions with the same parameters. You can simply not specify the actual parameter and the c++ will automatically use the default parameter.
- `disadvantage`: in the function formal parameter specify, if you want to use  the default parameter, you have to strictly follow that the default parameter should be the right hand side of the form parameter. That means void add(int a, int b = 1)//this is ok. But void add(int a = 1, int b)// this is wrong. Second is that: void add(int a, int b=1, int c = 1). if you want to pass a=1, c = 1 and keep b as default. You have to pass add(a=1,b=1,c=1) rather than add(a=1,c=1)//this is wrong.

### T5.

In a class there are alway many attributes of an object, i.e. many variables.

It can be very confusing to compare two object in that case.