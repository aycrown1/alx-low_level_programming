# 0x09-static_libraries

## Static Libaries

C static libraries are collections of pre-compiled object code that can be linked into a C program at compile-time to provide reusable functions and other code that can be shared across multiple programs.

A static library is essentially a collection of object files that have been bundled into a single file, with a ".a" file extension on Unix-based systems

```
# Compile all .c file into an object file

 gcc -c *.c

```
The `-c` option tells gcc to compile the file but not link it, since we'll be linking all the object files together later.


After all the .c files have been compiled into object files.

```
# Create the library archive file

ar rcs lib.a *.o

```
The `ar` command create the library archive file "liball.a" using all the .o files in the directory. 

The `-rcs` options specify that we want to create a new archive file, replace any existing files, and include a table of contents in the file.

```
# Clean up the object files
rm *.o

```
the `rm` command, since we no longer need them once they've been bundled into the library.


```

The `ar -t` command is a Unix-based command that is used to display a table of contents (TOC) of a static library archive file.

The `ar -x` command to extract a specific object file from the library

The `ar -d` command to delete a file from the library.

