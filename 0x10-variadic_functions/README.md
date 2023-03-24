# 0x10-variadic_functions


## What are variadic functions

Variadic functions are functions that can take a variable number of arguments. These functions are declared with an ellipsis (...) as the last parameter, indicating that the function may receive an arbitrary number of arguments. 

```
#include <stdarg.h>


data_type func_name(fixed_args_data_type fixed_args, ...)
{
	va_list va_list_object;
	va_start(va_list_object, last_fixed_arg_name);

	/* function body goes here ... */

	va_arg(va_list_object, data_type_of_the_next_arg);
	va_end(va_list_object);

}
```
	


stdarg.h is an header file in C standard library of the C programming language that allows functions to accept an indefinite number of arguments

## How to use va_start, va_arg and va_end macros

va_list is a complete object type suitable for holding the information needed by the macros `va_start,` `va_arg`, and `va_end`.

`va_start`: This macro initializes a `va_list_object`, which is used to access the variable arguments. 

It takes two arguments: the first is the `va_list` object to be initialized, and the second is the name of the last fixed argument of the function.

`va_arg`: This macro returns the next argument in the `va_list_object` as the specified type.

It takes two arguments: the first is the `va_list_object`, and the second is the type of the next argument.

`va_end`: This macro cleans up the `va_list_object` after it has been used. It takes one argument, which is the `va_list_object`.


## Const type qualifier.

The const keyword is used to declare a variable as read-only, which means that its value cannot be changed once it has been initialized.

```
func_data_type func_name(const data_type variable);

```
