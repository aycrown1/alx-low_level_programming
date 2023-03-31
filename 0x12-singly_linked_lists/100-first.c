#include <stdio.h>


/**
 * startup - prints a message before the main function is executed
 *
 * Description: prints a message to the standard output
 * before the main function is executed
 */
void startup(void) __attribute__ ((constructor));
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

