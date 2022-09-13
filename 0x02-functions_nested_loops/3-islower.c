#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: character to test
 * Return: 1 for lowercase and 0 for otherwise
 *
 * uses the ctype header to check if the character passed is lower or not
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
