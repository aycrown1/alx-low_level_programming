## C - Makefile

Make and Makefiles are fundamental tools in software development used to automate the build process of programs and manage dependencies between files.


   - **Make:** It's a command-line tool that reads a Makefile and automates the build process by executing rules and commands defined in the Makefile.
   - **Makefile:** It's a plain text file that contains rules, dependencies, and commands to build a project. Make uses this file to determine how to build the target files.


   - Makefiles are used when you have a project with multiple source files, and you want to automate the compilation and linking processes.
   - They help streamline development by automating tasks, managing dependencies, and ensuring that only necessary parts are rebuilt when changes occur.
   - Create a Makefile in your project directory with rules for compiling, linking, and other tasks. Run the "make" command to execute the rules.


   - **Rules:** In a Makefile, rules define how to build target files from source files. They consist of a target, dependencies, and commands.
   - **Setting and Using Rules:** You define rules by specifying the target file, its dependencies (source files), and the commands needed to build it. Here's a basic example:

   ```make
   target: dependency1 dependency2
       command1
       command2
   ```

   - **Explicit Rules:** These are user-defined rules that explicitly specify how to build a target from its dependencies, as shown in the example above.
   - **Implicit Rules:** These are built-in rules that Make uses when no explicit rule is defined. For example, Make knows how to compile a ".c" file into an executable.


   - Common rules depend on the project, but some frequently used ones include:
     - `all`: To build the entire project.
     - `clean`: To remove generated files.
     - `install`: To install the compiled program or files.
     - `test`: To run tests.
     - `%.o: %.c`: A pattern rule for compiling C source files to object files.


   - **Variables:** In Makefiles, variables are used to store values that can be reused throughout the file.
   - **Setting and Using Variables:** You can set variables like this:
   
   ```make
   CC = gcc
   CFLAGS = -Wall -O2
   ```
   
   And use them in rules or commands:
   
   ```make
   target: dependency1 dependency2
       $(CC) $(CFLAGS) -o target dependency1 dependency2
   ```


