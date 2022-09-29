#include "main.h"

/**
 * is_prime_number - check if n is a prime number
 * @n: number to check
 * Return: 1 is number is a prime number or 0 if not
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers less than n if they can divide it
 * @x: number to check as prime
 * @y: starting number (2)
 * Return: 0 or 1
 */
int check_prime(int x, int y)
{
	if (y >= x && x > 1)
		return (1);
	else if (x % y == 0 || x <= 1)
		return (0);
	else
		return (check_prime(x, y + 1));
}
