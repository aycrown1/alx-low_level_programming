# 0x0B. C - malloc, free

`malloc()` and `free()` are two standard C library functions used for dynamic memory allocation.

## Dynamic Allocation

Dynamic allocation happens at runtime, when the program is actually running. This means that memory is allocated as the program needs it, rather than all at once at compile-time. 

## malloc()

`malloc()` allocates a block of memory of a specified size, and returns a pointer to the first byte of the block.

`malloc()` is used when you need to allocate memory at runtime, and you don't know exactly how much memory you will need ahead of time.

 For example, if you're writing a program that reads in a file of unknown length, you might use `malloc()` to allocate a buffer to hold the file's contents.

```
int *array = malloc(sizeof(int) * 10);
```
This code allocates enough memory to hold 10 integers, and assigns a pointer to the first byte of the block to `array`.


## free()

free() frees up memory previously allocated with malloc()

```
free(my_array);
```

## Valgrind

Valgrind is a popular tool for detecting memory leaks in C and C++ programs.


