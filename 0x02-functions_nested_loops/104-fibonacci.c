#include <stdio.h>
/**
 * main - print first 98 Fibonacci numbers
 * Return: 0 for success
 */
int main(void)
{
	int count = 0;
	unsigned long i, j, k;
	unsigned long m, n, p, carry;

	i = 0;
	j = 1;
	for (count = 1; count <= 91; count++)
	{
		k = i + j;
		i  = j;
		j = k;
		printf("%lu, ", k);
	}

	m = i % 1000;
	i = i / 1000;
	n = j % 1000;
	j = j / 1000;
	while (count <= 98)
	{
		carry = (m + n) / 1000;
		p = (m + n) - carry * 1000;
		k = (i + j) + carry;
		m = n;
		n = p;
		i = j;
		j = k;
		if (p >= 100)
			printf("%lu%lu", k, p);
		else
			printf("%lu0%lu", k, p);

		if (count != 98)
			printf(", ");
		count++;
	}
	printf("\n");
	return (0);
}
