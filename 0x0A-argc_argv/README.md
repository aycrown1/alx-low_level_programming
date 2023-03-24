# 0x0A. C - argc, argv

## Argc 

`argc` is an integer that represents the number of arguments passed to the program. It includes the name of the program as the first argument, so the minimum value for argc is 1.

## Argv

`argv` is an array of strings (i.e., an array of pointers to characters) that contains the arguments passed to the program, starting with the second argument. The first element of `argv` (`argv[0]`) is a string that contains the name of the program itself.

```c
int main(int argc, char *argv[]) {
   /* use parameters */
    return 0;
}

```

```c
argv[0] = "program name"
argv[1] = "first argument"
argv[2] = "second argument"

```

```c
#include <stdio.h>

/* print the number of argument in the function */

int main(int argc, char *argv[]) {
    printf("%d\n", argc - 1);
    return 0;
}

```
