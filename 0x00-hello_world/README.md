# "Hello, World!"

A "Hello, World!" program is a small piece of code in most general-purpose programming languages, this program is used to illustrate a language's basic syntax. "Hello, World!" programs are often the first a student learns to write in a given language

```
#include <stdio.h>
main( ) {
        printf("hello, world\n");
}
```


## Project Content 

[0-preprocessor](### Preprocessor)

A script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.

Preprocessor is a program that processes a source code file before it is passed to the compiler.

To make this Script we make use of the `gcc` compiler and the `-E` option that invoke the preprocessor without compling or using the linker. The `.o` file extension is an extensionfor object file in C


[1-compiler](### compiler)

 a script that compiles a C file but does not link.

The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.

Compiler takes the preprocessed file and uses it to generate corresponding assembly code. 
the -c option says not to run the linker. Then the output consists of object files output by the assembler.



