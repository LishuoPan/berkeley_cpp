# M9_ShortAnswers

#### Lishuo Pan

------

### T1.

this is because, when we put the templatized function bodies into the header file. When the compiler see the templatized function body, it will not generate the code. Only when we declare an object with a specific template argument the compiler will generate the code.

### T2.

they are totally different concepts.

macros is function body, but since it is very small, we can define it in the class declaration, do not have to jump between these code and the main function. It can speed up the code when the macro is small.

However, the templates are long, and it will not generate the code when the compiler see the templatized function body.

And in the macros, we will specify the specific type of the data. In the template, we will not specify the specific data type want to use. This is more flexible.

### T3.

the parameters to the template, you do not have to specify the specific data type of the parameter. It is a generic data parameter. you can use many data type for your parameter.

However, for a formal parameters to a function. You have to specify the data type for every parameter you want to pass to the function.  

