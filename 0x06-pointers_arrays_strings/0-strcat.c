#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string ot append
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *new_str;
	int i, len;

	/** get destination string **/
	new_str = dest;
	for (i = 0; new_str[i] != '\0'; i++)
		;
	len = i;
	for (i = 0; src[i] != '\0'; i++)
	{
		new_str[len + i] = src[i];
	}
	new_str[len + i] = '\0';

	return (new_str);
}
