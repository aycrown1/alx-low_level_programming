#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int num;
char alpha;

for
(num = 0;
num < 10;
num++)
{
putchar((num % 10) + '0');
}
for
(alpha = 'a';
alpha <= 'f';
alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
