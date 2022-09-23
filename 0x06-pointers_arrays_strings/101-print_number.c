#include "main.h"
/**
 * print_number - prints an integer using _putchar()
 * @n: integer to print
 * Return: void
 */
void print_number(int n)
{
	int divisor, digit;

	divisor = 1;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/** find the largest divisor of number */
	while (n / divisor > 9)
	{
		divisor *= 10;
	}

	while (divisor >= 1)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}

}
