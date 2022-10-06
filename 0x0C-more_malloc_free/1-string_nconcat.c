#include <stdlib.h>

/**
* _strlen - calculate string length
* @s: string to find lenght
* Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: first string to use
 * @s2: second string to use
 * @n: bytes of s2 to use
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len, s2_len, i;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n >= s2_len)
		new_str = malloc((s1_len + s2_len) * sizeof(char) + 1);
	else
		new_str = malloc((s1_len + n) * sizeof(char) + 1);

	if (new_str == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		new_str[i] = s1[i];
	for (i = 0; s2[i] != '\0' && i < n; i++)
		new_str[s1_len + i] = s2[i];
	new_str[s1_len + i] = '\0';

	return (new_str);

}
