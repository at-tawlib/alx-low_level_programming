/**
 * _strcmp - compares two strings
 * @s1: string to be compared to
 * @s2: string to campare
 * Return: an integer less than, equal to or greater than 0
 *
 * less than 0 if s1 is found to be less than s2
 * 0 if s1 is equal to s2
 * greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
