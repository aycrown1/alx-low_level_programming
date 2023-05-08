# 0x15-file_io

In C programming language, file input/output (I/O) operations are performed using file handling functions. The process involves creating a file, opening it, performing read or write operations, and then closing the file.

To create a file, you can use the `fopen()` function, which takes two arguments - the file name and the mode in which the file should be opened. If the file already exists, the function opens it. If the file does not exist, the function creates it. 

To open a file, you can use the `fopen()` function, which takes two arguments - the file name and the mode in which the file should be opened.
modes:
`a`	|	`append`
`r`	|	`read`
`w`	|	`write`

To read from a file, you can use the `fread()` function, which takes four arguments - a pointer to the buffer where the data will be stored, the size of each element to be read, the number of elements to be read, and the file pointer.

```c
char buffer[100];
fread(buffer, sizeof(char), 100, fp);

```

To write to a file, you can use the `fwrite()` function, which takes four arguments - a pointer to the buffer containing the data to be written, the size of each element to be written, the number of elements to be written, and the file pointer.

```c
char buffer[100] = "Hello World!";
fwrite(buffer, sizeof(char), 12, fp);
```

To close a file, you can use the `fclose()` function, which takes one argument - the file pointer.
```c
fclose(fp);
```


In Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

The three standard file descriptors are:

STDIN_FILENO (0): This file descriptor is associated with the standard input stream, which is used for reading input from the user. Its POSIX name is STDIN.

STDOUT_FILENO (1): This file descriptor is associated with the standard output stream, which is used for writing output to the user. Its POSIX name is STDOUT.

STDERR_FILENO (2): This file descriptor is associated with the standard error stream, which is used for writing error messages to the user. Its POSIX name is STDERR.


#### I/O System Call

A system call is a request made by a process to the operating system kernel for a service or resource that it does not have direct access to. System calls provide an interface between a process and the operating system, allowing the process to perform low-level operations that are not possible with normal function calls.

Examples of system calls include `open()`, `close()`, `read()`, `write()`, `fork()`, `exec()`, and `exit()`.

To use the I/O system calls, you can use the following functions:

```c
int open(const char *pathname, int flags, mode_t mode);
```
 This function opens a file and returns a file descriptor.

```c
int close(int fd);
```
 This function closes a file descriptor.

```c
ssize_t read(int fd, void *buf, size_t count);
````
This function reads data from a file into a buffer.

```c
ssize_t write(int fd, const void *buf, size_t count);

````
 This function writes data from a buffer to a file.

The flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR` are used to specify the mode in which the file should be opened. 
`O_RDONLY` specifies read-only mode, `O_WRONLY` specifies write-only mode, and `O_RDWR` specifies read-write mode.

File permissions are a set of attributes that determine who can read, write, and execute a file. When creating a file with the open system call, you can set the file permissions by using the mode argument. The mode argument is a combination of the permission bits, which are specified using the octal notation.

```c
int fd = open("file.txt", O_CREAT | O_RDWR, 0644);
```
Here, the mode argument 0644 sets the owner permissions to read and write (6), and the group and others permissions to read-only (4).

In Unix-like systems, file permissions are represented by a 10-bit value, consisting of a 3-bit set of permission flags for the owner, a 3-bit set of permission flags for the group, and a 3-bit set of permission flags for others, and a 1-bit set of special permission flags.

The permission flags for each set can be set to read (r), write (w), or execute (x), represented by the octal values 4, 2, and 1, respectively. The special permission flag is used to set the setuid, setgid, or sticky bit.
