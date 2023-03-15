# 0x07. C - Even more pointers, arrays and strings

In C, an array name is actually a pointer to the first element of the array. For example, if arr is an array, then `arr` is equivalent to `&arr[0]`. This means that you can use pointer arithmetic to traverse the array by incrementing the pointer and accessing the next element, like this: `*(arr + i)` or `arr[i]`.

Similarly, a string in C is simply an array of characters terminated by a null character `\0`. The end of a string can be determined by searching for the null character. You can also use pointer arithmetic to traverse the string by incrementing the pointer and accessing the next character, like this: `*(str + i) or str[i]`.

When you pass an array or a string to a function in C, you are actually passing a pointer to the first element of the array or string. This means that any changes made to the array or string inside the function will affect the original array or string in the calling function.

Pointers can also be used to create linked lists, trees, and other data structures in C. In these cases, each node or element in the structure contains a pointer to the next node or element in the structure, allowing you to traverse and modify the structure using pointer arithmetic.

Pointers can also be used to pass functions as arguments to other functions in C. This allows you to create higher-order functions that can accept other functions as input, which can be useful for implementing algorithms and data structures.


`_memset()` function:
### [0-memset.c](0-memset.c)

takes three arguments - s, b, and n. s is a pointer to the memory area to be filled with a constant byte b, and n is the number of bytes to be filled.

use a while loop to fill n bytes of memory area with the constant byte b. Each byte is filled by dereferencing the pointer ptr and incrementing it.

Finally, the function returns a pointer to the memory area s that has been filled with the constant byte b.


`_memcpy()` function:
### [1-memcpy.c](1-memcpy.c)

takes three arguments - `dest`, `src`, and `n`. `dest` is a pointer to the destination memory area, `src` is a pointer to the source memory area, and `n` is the number of bytes to be copied from `src` to `dest`

the function uses while loop to copy n bytes from src to dest. Each byte is copied by dereferencing the pointers and incrementing them.
the return a pointer to the destination memory area dest.

`_strchr()` function:
### [2-strchr.c](2-strchr.c)
