#include <stdio.h>

void beforeMain(void) __attribute__((constructor));

/**
 * beforeMain- prints a string before the main function is executed
 */
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
