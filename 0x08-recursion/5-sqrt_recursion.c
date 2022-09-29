#include "main.h"
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: value to test
 * @val: square root number
 * Return: int
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
