#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int count = 0;

	while (count < 10)
	{
		int n = 0;

		while (n <= 14)
		{
			int digit = n;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				digit = n % 10;
			}
			_putchar(digit + '0');
			n++;
		}
		count++;
		_putchar(10);
	}
}
