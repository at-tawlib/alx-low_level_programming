#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 for alphabetic and 0 for otheriwse
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
