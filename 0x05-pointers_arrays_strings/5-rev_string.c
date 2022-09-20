#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	char *new = NULL;

	i = 0;
	j = 0;

	/** get len of string */
	for (i = 0; s[i] != '\0'; i++)
		;

	i--;
	while (i >= 0)
	{
		temp = s[i];
		new[j] = temp;
		i--;
		j++;
	}
	new[j] = '\0';
	for (i = 0; new[i] != '\0'; i++)
	{
		*(s + i) = new[i];
	}
	*(s + 1) = '\0';
}
