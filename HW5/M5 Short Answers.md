# M5 Short Answers

### Lishuo Pan

------

### T1.

by definition, operator float() return a float. It will be called when a objective A should be converted to float.

### T2.

No, this will not be a problem. As long as we know the member variable of the source class, we can use the convert function in the destination object, to convert the value of variable of source object to the value of the destination objective.

### T3.

In my point of view, you can declare this conversion in the client source code, and implement it as no change of the object, this will block the certain type of change.

### T4.

Because they may convert the object you defined in the wrong way, and there's no error so it will be very hard for developer to notice.

### T5.

When you pass an object, then the function will make a copy of the objective. Unless it is a small objective, it will be more expensive than just pass a reference of object in.  