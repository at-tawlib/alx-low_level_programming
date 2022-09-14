#include <stdio.h>
/**
 * main - entry point of funtions
 * Return: 0 for success
 */
int main(void)
{
	int n = 0;
	int sum = 0;

	while (n < 1024)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum = sum + n;
		}
		n++;
	}

	printf("%d\n", sum);
	return (0);
}
