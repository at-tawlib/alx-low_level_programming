#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to use to print
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
