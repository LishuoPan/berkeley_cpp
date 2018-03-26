# M1_ShortAnswers

#### Lishuo Pan

---

### T1.

- Organization — With the grows of the program. If we do not use the function. The Organization will be messy.
- Reusability — We can simply call the function once we define them.
- It's good for testing — first it can reduce code redundancy. Second, the function is self-contained, once the function is tested, it's safe.
- Extensibility — once we add some new features to the function, the new feature is available for everywhere the function is called.
- Abstraction — To use a function, you don't have to know how exactly it works. You just have to know its name, input, output, what's its usage.

### T2.

​	we use the function prototype to specify the expected input and output of a function. We better use a function prototype in the program. If we don't give a function prototype, the behavior will differ from different C standard. Until C90 the return of an omitted function prototype function is int. After C99, the compiler no longer assume the return of a omitted function prototype function to be int. 

### T3.

```
using namespace std;
```

​	This using directive makes all the names and definitions in the std namespace available.

​	We can simply use the functions without specify the namespace std.

​	We can also save the names definitions into a namespace.	

### T4.

​	C++ places no limits on the length of a name.

### T5.

​	Generally, int is set to the most “natural” integer size for the target computer. Natural size refers to the integer form that the computer handles most efficiently. If there is no compelling reason to choose another type, we should use int.

​	to put it simple. int is smaller. And it is the most natural data type for the computer.


​			
​		
​	