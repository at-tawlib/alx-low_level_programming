#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int num1 = 0;
	int num2, num3;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			num3 = num1 * num2;
			if (num2 == 0)
			{
				_putchar(num3 + '0');
			}
			else if (num3 < 10)
			{
				_putchar(' ');
				_putchar(num3 + '0');
			}
			else
			{
				_putchar(num3 / 10 + '0');
				_putchar(num3 % 10 + '0');
			}

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
