#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits string intwo words
 * @str: string to split
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j; 
	char **new_str;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0, j = 0; str[i] != ' '; i++, j++)
	{
		new_str[0][j] = str[i];
	}

	i++;
	for (j = 0; str[i] != '\n'; i++, j++)
	{
		new_str[1][j] = str[i];
	}

	return (new_str);
}
