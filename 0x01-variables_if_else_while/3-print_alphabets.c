#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/*printing the alphabets in lowercase using the ACSII values.*/
int alphabet, ALPHABET;
for
(alphabet = 97;
alphabet <= 122;
alphabet++)
{
putchar(alphabet);
};
for
(ALPHABET = 65;
ALPHABET <= 90;
ALPHABET++)
{
putchar(ALPHABET);
}
/* the ASCII value for a and z are 97 and 122 respectively. */
putchar('\n');
return (0);
}
