# 0x14-bit_manipulation


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

* Write a function that converts a binary number to an `unsigned int`.

 Prototype:` unsigned int binary_to_uint(const char *b);`
  where `b` is pointing to a string of `0` and `1` chars
  Return: the converted number, or 0 ifthere is one or more chars in the string b that is not `0` or `1`
 `b` is `NULL`

here is the code: 
[0-binary_to_uint.c](0-binary_to_uint.c)

`binary_to_uint` that takes a pointer to a string of 0s and 1s, and returns the unsigned integer value represented by the binary string.

The function checks if it is a valid binary digit ('0' or '1'). If it is, it shifts the binary value in num left by one bit using the << operator, and then adds the binary value of the current digit using the expression (b[i] - '0').



