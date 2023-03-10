#!/bin/bash

# Looping through all file in the current direvtory containing a suffix of .c and Compile each .c file into an object file
for file in *.c; do
  gcc -c $file
done

# Creating the library archive file called liball.a
ar rcs liball.a *.o

# Cleaning up the object files in the directory, since we no longer need them once they've been bundled into the library.
rm *.o

