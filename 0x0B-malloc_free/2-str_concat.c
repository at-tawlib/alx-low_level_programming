#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to use for concatenation
 * @s2: second string to usee for concatenation
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** get length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
		;
	len_s1 = i;

	/** get length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
		;
	len_s2 = i;

	str = malloc((len_s1 + len_s2) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i <= len_s2; i++)
		str[len_s1 + i] = s2[i];
	return (str);
}
