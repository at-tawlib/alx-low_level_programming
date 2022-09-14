#include <stdio.h>
/**
 * main - print first 50 Fibonacci numbers
 * Return: 0 for success
 */
int main(void)
{
	int count = 0;
	long int previous = 1;
	long int next = 1;
	long int sum = 1;

	while (count < 50)
	{
		printf("%lu", sum);
		previous = sum;
		sum = sum + next;
		next = previous;

		if (count < 49)
		{
			printf(", ");
		}
		count++;
	}

	printf("\n");

	return (0);
}
