#include <stdlib.h>

/**
 * _strlen - calculate string length
 * @s: string to find length
 * Return: lent of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * argstostr - concatenates all the arguments of main function
 * @ac: arguments count
 * @av: arguments
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, total_length;
	char *new_str;

	total_length = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	/** get total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		/** +1 for adding '\n' */
		total_length = total_length + _strlen(av[i]) + 1;
	}

	/** +1 for adding '\0' */
	new_str = malloc(total_length * sizeof(char) + 1);
	if (new_str == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}

	new_str[k] = '\0';
	return (new_str);
}
