#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: times table to print
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15 || n < 0))
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int num = i * j;

			if (j == 0)
				_putchar(num + '0');
			else if (num >= 100)
			{
				_putchar(num / 100 + '0');
				_putchar((num / 10) % 10 + '0');
				_putchar(num % 10 + '0');
			}
			else if (num >= 10)
			{
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
	}
}
