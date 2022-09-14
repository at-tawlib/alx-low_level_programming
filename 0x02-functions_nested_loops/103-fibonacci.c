#include <stdio.h>
/**
 * main - entry point of code
 * Return: 0 for success
 */
int main(void)
{
	long int previous = 1;
	long int next = 1;
	long int sum = 1;
	long int sumOfEven = 0;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			sumOfEven = sumOfEven + sum;
		}

		previous = sum;
		sum = sum + next;
		next = previous;
	}

	printf("%lu\n", sumOfEven);
	return (0);
}
