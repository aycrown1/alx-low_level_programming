# "Hello, World!"

A "Hello, World!" program is a small piece of code in most general-purpose programming languages, this program is used to illustrate a language's basic syntax. "Hello, World!" programs are often the first a student learns to write in a given language

```c
#include <stdio.h>
main( ) {
        printf("hello, world\n");
}
```


## Project Content 

### [0-preprocessor](0-preprocessor)

A script that compiles a C file but does not link.

The C file name will be saved in the variable `$CFILE`
The output file should be named the same as the C file, but with the extension `.o` instead of `.c.`

Preprocessor is a program that processes a source code file before it is passed to the compiler.

To make this Script we make use of the `gcc` compiler and the `-E` option that invoke the preprocessor without compling or using the linker. The `.o` file extension is an extensionfor object file in C


### [1-compiler](1-compiler)

 A script that compiles a C file but does not link.

The C file name will be saved in the variable `$CFILE`
The output file should be named the same as the C file, but with the extension .o instead of .c.

Compiler takes the preprocessed file and uses it to generate corresponding assembly code. 
The gcc `-c` option says not to run the linker. Then the output consists of object files output by the assembler.


### [2-assembler](2-assembler)

A script that generates the assembly code of a C code and save it in an output file.

An Assembler is a program that converts Assembly language into machine code. It just converts assembly language or low-level codes into machine codes that could be better recognized by a specific type of processor.

This script contains a gcc `-S` -option that Generates an assembler language file for each source file.

The resulting file has a `.s` suffix


### [3-name](3-name)

A script that compiles a C file and creates an executable named cisfun.

This script contains the gcc `-o` option that is use to Specifies a name for the output object, assembler, executable, or preprocessed file.


### [4-puts.c](4-puts.c)

A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line, Uses the `puts()` function as standard output and return 0.

```c
puts("\"Programming is like building a multilingual puzzle");

return (0);

```
###  [5-printf.c](5-printf.c)

A  C program that prints exactly with proper grammar, but the outcome is a piece of art, followed by a new line. Uses the `printf()` function and return 0.

```c
printf("%s\n", mychar);

return (0);

```


### [6-size.c](6-size.c)

A  C program that prints the size of various types on the computer it is compiled and run on.

```c
printf("Size of a data type: %lu byte(s)\n", (unsigned long)sizeof(data_type));

```

### [100-intel](100-intel)

A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

This script uses the gcc `-S` option and the `-masm=dialect` option which generate the assembler code  using selected dialect. Supported choices include intel syntax.


### [101-quote.c](101-quote.c)

A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts

This script uses the `write()` function:

```c
#include <unistd.h>
ssize_t write(int fd, const void *buf, size_t count);

```

write() writes up to count bytes from the buffer pointed buf to the file referred to by the file descriptor fd.


