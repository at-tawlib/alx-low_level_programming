#include <ctype.h>
/**
* _isupper - checks for uppercase character
* @c: character to check
* Return: return 1 for uppercase and 0 for otherwise
*/
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
