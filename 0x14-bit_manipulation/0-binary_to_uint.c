#include "main.h"

/**
 * binary_to_uint - converts binary number ot an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	num = 0;
	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}

	return (num);
}
