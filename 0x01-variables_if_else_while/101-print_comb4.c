#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 for success
 */
int main(void)
{
	int digit1 = 48;
	int digit2 = 48;
	int digit3 = 48;

	while (digit1 <= 57)
	{
		while (digit2 <= 57)
		{
			while (digit3 <= 57)
			{
				if (!(digit1 == digit2 || digit2 == digit3 || digit1 == digit3))
				{
					putchar(digit1);
					putchar(digit2);
					putchar(digit3);
					if (!(digit1 == 55 && digit2 == 56 && digit3 == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit3++;
			}
			digit2++;
			digit3 = digit2;
		}
		digit1++;
		digit2 = digit1;
		digit3 = 48;
	}
	putchar(10);

return (0);
}
