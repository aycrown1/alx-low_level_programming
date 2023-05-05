# 0x14-bit_manipulation

Bit manipulation in C refers to the manipulation of individual bits or groups of bits within a larger data structure such as an integer or a character array. It involves performing operations such as setting, clearing, flipping, and checking the values of individual bits within a data structure, often using bitwise operators such as `&` (AND), `|` (OR), `^` (XOR), and `~` (NOT).

### How to manipulate bits and use bitwise operators

Bitwise operators are used to manipulate individual bits of data.
Here are the bitwise operators available in C:

- `&` - Bitwise AND
- `|` - Bitwise OR
- `^` - Bitwise XOR
- `~` - Bitwise NOT
- `<<` - Bitwise left shift
- `>>` - Bitwise right shift

AND (&): performs a bitwise AND operation on two values. The result is a value where each bit is 1 only if the corresponding bits of both operands are 1.

OR (|): performs a bitwise OR operation on two values. The result is a value where each bit is 1 if the corresponding bits of either operand are 1.

XOR (^): performs a bitwise XOR operation on two values. The result is a value where each bit is 1 only if the corresponding bits of one operand are 1 and the other operand are 0.

NOT (~): performs a bitwise NOT operation on a value. The result is a value where each bit is flipped (0 becomes 1, and 1 becomes 0).

Left shift (<<): Shifts the bits of the left operand to the left by the number of positions specified by the right operand.

Right shift (>>): Shifts the bits of the left operand to the right by the number of positions specified by the right operand.

```c
unsigned int a = 0b1010; /* Binary literal for the number 10 */
unsigned int b = 0b1100; /* Binary literal for the number 12 */

unsigned int c = a & b; 
/* Bitwise AND of a and b, c is now 0b1000 (binary literal for the number 8)
 */

unsigned int d = a | b; 
/* Bitwise OR of a and b, d is now 0b1110 (binary literal for the number 14)
 */

unsigned int e = a ^ b; 
/* Bitwise XOR of a and b,  e is now 0b0110 (binary literal for the number 6) 
 */

unsigned int f = ~a; 
/* Bitwise NOT of a, f is now 0b11111111111111111111111111110101 (binary literal for the number 4294967285) 
 */

unsigned int g = a << 2; 
/* Bitwise left shift of a by 2 bits,  g is now 0b101000 (binary literal for the number 40)
 */

unsigned int h = b >> 1;
/* Bitwise right shift of b by 1 bit, h is now 0b0110 (binary literal for the number 6)
 */

```

## Functions.

#### Write a function that converts a binary number to an `unsigned int`.

* Prototype:` unsigned int binary_to_uint(const char *b);`
* where `b` is pointing to a string of `0` and `1` chars
* Return: the converted number, or 0 ifthere is one or more chars in the string b that is not `0` or `1`
* `b` is `NULL`

##### [0-binary_to_uint.c](here is the code)

`binary_to_uint` takes a pointer to a string of 0s and 1s, and returns the unsigned integer value represented by the binary string.

The function checks if it is a valid binary digit ('0' or '1'). If it is, it shifts the binary value in num left by one bit using the << operator, and then adds the binary value of the current digit using the expression (b[i] - '0').


#### Write a function that prints the binary representation of a number.

Prototype: `void print_binary(unsigned long int n);`
* You are not allowed to use arrays
* You are not allowed to use malloc
* You are not allowed to use the % or / operators

##### [here is the code](1-print_binary.c)

```c
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}

```

The function uses recursion to print the binary representation of the number `n` in reverse order. Specifically, if `n` is greater than `1` (i.e., it has more than one binary digit), the function calls itself with the value of `n` shifted right by one bit using the `>>` operator.

When the function returns from the recursive call, it prints the least significant bit of `n` to standard output using the `putchar` function. To do this, it uses the bitwise `AND` operator `&` to extract the least significant bit of `n`, which is either `0 or 1`, and then adds the ASCII code for '0' to get the corresponding character `'0' or '1'`.
When all bits of n have been printed, the function returns to the calling function




#### Write a function that returns the value of a bit at a given index.

* Prototype: `int get_bit(unsigned long int n, unsigned int index);`
* where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured

##### [here is the code](2-get_bit.c)

`get_bit` takes an unsigned long integer n and an unsigned integer index and returns the value of the bit at the given index (counting from the rightmost or least significant bit as index 0). 




#### Write a function that sets the value of a bit to 1 at a given index.

* Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

##### [here is the code](3-set_bit.c)

`set_bit` sets the value of a bit to 1 at a given index in a given unsigned long integer pointed by n.

The function first checks if the pointer n is NULL or if the index is greater than or equal to the maximum number of bits in an unsigned long integer (minus 1), in which case it returns -1 to indicate an error.

If the input is valid, the function sets the bit at the given index by performing a bitwise OR operation between the number pointed by n and a value with the bit at the given index set to 1. The result is then assigned back to n.

The function returns 1 to indicate success.



#### Write a function that sets the value of a bit to 0 at a given index.

* Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred

##### [here is the code](4-clear_bit.c)

`clear_bit` sets the value of a bit to 0 at a given index in a given unsigned long integer pointed by `n`.

The function first checks if the index is greater than or equal to the maximum number of bits in an unsigned long integer, in which case it returns -1 to indicate an error.

If the input is valid, the function clears the bit at the given index by performing a bitwise `AND` operation between the number pointed by `n` and a value with the bit at the given index set to 0 (complemented). The result is then assigned back to n.

The function returns 1 to indicate success.



#### Write a function that returns the number of bits you would need to flip to get from one number to another.

* Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
* You are not allowed to use the % or / operators

##### [here is the code](5-flip_bits.c)


`flip_bits` calculates the number of bits that need to be flipped to convert one unsigned long integer n into another unsigned long integer m. The function returns the number of bits required for this conversion.

The function first calculates the bitwise XOR of the two numbers n and m and stores the result in a new variable x. The XOR operation results in a new number that has all the bits that are different in n and m set to 1, and all the bits that are the same set to 0.

The function then initializes a variable count to 0 and enters a loop that runs as long as x is not zero. In each iteration of the loop, the function checks if the least significant bit of x is set to 1 by performing a bitwise AND operation between x and 1. If the result of the AND operation is 1, then the least significant bit of x is 1, and the function increments the count variable by 1. The function then right shifts x by 1 to check the next bit.

After the loop ends, the function returns the count variable, which contains the number of bits that need to be flipped to convert `n` into `m`.


#### Write a function that checks the endianness.

* Prototype: `int get_endianness(void);`
* Returns: 0 if big endian, 1 if little endian

##### [here is the code](100-get_endianness.c)

Endianness refers to the order in which bytes are stored in computer memory. There are two types of endianness: big endian and little endian.
In a big endian system, the most significant byte (MSB) is stored first (at the lowest memory address), and the least significant byte (LSB) is stored last (at the highest memory address). In a little endian system, the LSB is stored first, and the MSB is stored last.

This function checks the endianness of the system.

```c


/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c == 1);
}

```
The function creates an unsigned integer `i` with the value 1 and a character pointer `c` pointing to the address of `i`. It then checks if the value of the first byte in memory pointed to by `c` is 1. If it is, then the system is little-endian and the function returns 1. Otherwise, the system is big-endian and the function returns 0.



#### Find the password for [this program](https://github.com/holbertonschool/0x13.c)
 
* Save the password in the file `101-password`
* Your file should contain the exact password, no new line, no extra space

##### [here is the code](101-password)

here is how the code is write

```shell


