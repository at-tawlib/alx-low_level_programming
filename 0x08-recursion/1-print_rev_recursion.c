#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to reverse
 */
void _print_rev_recursion(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
