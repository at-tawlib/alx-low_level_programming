#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers
 * Return: 0 for success
 */
int main(void)
{
	int count = 0;
	unsigned long int previous = 0;
	unsigned long int next = 0;
	unsigned long int current = 1;

	while (count < 98)
	{
		next = previous + current;
		previous = current;
		current = next;

		printf("%lu", next);

		if (count < 97)
		{
			printf(", ");
		}
		count++;
	}

	printf("\n");

	return (0);
}
