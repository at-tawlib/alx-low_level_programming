#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: first number to print
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}

