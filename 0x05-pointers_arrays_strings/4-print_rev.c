#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = 0;

	/** get length of string **/
	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar(10);
}
