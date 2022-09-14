#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @digit: digit to test
 * Return: value of the last digit
 */
int print_last_digit(int digit)
{
	int last_digit;

	if (digit < 0)
	{
		digit = digit * -1;
	}

	last_digit = digit % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
