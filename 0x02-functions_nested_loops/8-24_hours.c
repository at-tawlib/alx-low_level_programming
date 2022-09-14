#include "main.h"
/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int hour_count = 0;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (hour_count > 23)
			{
				break;
			}
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar(10);
				}
			}
			hour_count++;
		}
	}
}
