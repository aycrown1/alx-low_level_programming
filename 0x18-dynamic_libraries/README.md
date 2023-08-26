## 0x18-dynamic_libraries

### Dynamic Libraries

A dynamic library is a file containing reusable code that multiple programs can use simultaneously. It's loaded into memory at runtime and linked to the program, allowing multiple programs to share a single copy of the library in memory. To create a dynamic library, you compile your code with the "-shared" flag. To use it, you link your program against it during compilation and ensure the library is available at runtime.

#### Creating a dynamic library

1. Create a C source file, let's call it `mylibrary.c`, containing the following code:

```c
// mylibrary.c
#include <stdio.h>

void hello_dynamic() {
    printf("Hello from the dynamic library!\n");
}
```

2. Compile the source code into a dynamic library using the following command:

```bash
gcc -shared -o libmylibrary.so mylibrary.c
```

This will generate a shared library file named `libmylibrary.so`.

3. Create another C source file, `main.c`, that will use the dynamic library:

```c
// main.c
#include <stdio.h>

extern void hello_dynamic(); // Declare the function from the library

int main() {
    printf("Main program starts.\n");
    hello_dynamic(); // Call the function from the dynamic library
    printf("Main program ends.\n");
    return 0;
}
```

4. Compile the main program and link it with the dynamic library:

```bash
gcc -o main main.c -L. -lmylibrary
```

The `-L.` flag tells the linker to look for libraries in the current directory, and `-lmylibrary` specifies that it should link against `libmylibrary.so`.

5. Run the compiled `main` executable:

```bash
./main
```
The $LD_LIBRARY_PATH environment variable specifies the directories where the system should look for dynamic libraries. You can set it to include the directory containing your library. For example, "export LD_LIBRARY_PATH=/path/to/library" in the terminal. However, it's often better to use the system's library management tools.Static libraries are compiled into the program at compile time, increasing the binary size. Shared libraries are loaded at runtime, reducing the binary size. nm is used to list symbols from object files or libraries, ldd displays the shared library dependencies of a program, and ldconfig updates the cache used by the dynamic linker.