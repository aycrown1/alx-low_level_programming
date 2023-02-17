#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/**
 * printing the alphabets in lowercase except "q" and "e"
 *using the ACSII values.
 */
int alphabet;
for
(alphabet = 97;
alphabet <= 122;
alphabet++)
{
if
(alphabet != 113
&&
alphabet != 101)

putchar(alphabet);
};
/* the ASCII value for a and z are 97 and 122 respectively. */
putchar('\n');
return (0);
}
