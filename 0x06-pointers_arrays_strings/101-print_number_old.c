#include "main.h"
/**
 * print_number - prints an integer using _putchar()
 * @n: integer to print
 * Return: void
 * this does not work for numbers larger than 9999
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n >= 1000)
	{
		_putchar(n / 1000 + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
