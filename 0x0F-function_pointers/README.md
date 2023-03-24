# 0x0F-function_pointers

In C, a function itself is not a variable, but it is possible to define pointers to functions, which can be assigned, placed in arrays, passed to functions, returned by functions, and so on.
A function pointer is a variable that holds the memory address of a function.
It points to the code of a function rather than to data. Function pointers allow functions to be passed as arguments to other functions.

```c
data_type (*function_ptr_name)(arguments_data_types);

```
```c
void (*my_function_ptr)(int);

```
To use the function pointer, you must assign it the address of a function with exact arguments and  datatypes

This project contains the following tasks:

[prints name](0-print_name.c)

This fuction takes two arguments: a string representing a name, and a function pointer `f` that takes a string argument and returns void.

The function print_name calls the function pointer `f` with the `name` argument.

```c
(*f)(name);
```

[array iterator](1-array_iterator.c)

This function takes three arguments: 

an integer array `array`, 
the size of the array `size`,
 and a function pointer `action` that takes an integer argument and returns `void`. 

The function `array_iterator` iterates over the elements of the array using the `for` loop statement and calls the function pointer `action` with each element as an argument.

```c
for (size_t i = 0; i < size; i++) {
        (*action)(array[i]);
```


[int index](2-int_index.c)

[]()
[]()
