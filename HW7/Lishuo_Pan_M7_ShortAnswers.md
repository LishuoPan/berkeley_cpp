# M7_ShortAnswers

#### Lishuo Pan

------

### T1.

a pure virtual function has no body part, it has the declare form:

```
virtual void virtualfunctioname() = 0
```

in the class.

### T2.

It will cause an error saying:

error: variable type 'some_ADT' is an abstract class

### T3.

if one or more base classes have members of the same name, then you have to specify the class qualification. That is, you have specify you want to invoke the member under which class.

e.g. in the 7.6. 

Class motor{

public:

​	...

​	void print(void);

}

Class house{

public:

​	...

​	void print(void);

}

Class motorhouse: public motor, public house{

public:

​	void print();

}

Int main(){

​	motorhouse mh;

​	mh.motor::print(); // need class qaulification.

}