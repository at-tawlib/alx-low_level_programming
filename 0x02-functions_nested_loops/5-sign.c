#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: parameter to check
 * Return: 1 for n > 0, 0 for n = 0 and -1 for n < 0
 *
 * function also prints "+" for n > 0, "0" for n=0 and "-" for n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
