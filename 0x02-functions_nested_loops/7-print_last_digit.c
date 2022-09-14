#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @digit: digit to test
 * Return: value of the last digit
 */
int print_last_digit(int digit)
{
	int last_digit = digit % 10;

	if (digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar('0' + last_digit);
	return (last_digit);
}
