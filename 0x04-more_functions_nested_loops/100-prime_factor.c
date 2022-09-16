#include <stdio.h>
/**
 * main - entry point
 * Return: 0 always
 */

int main(void)
{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; ++i)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (n == i)
			{
				break;
			}
		}
	}

	printf("%lu\n", n);
	return (0);
}
