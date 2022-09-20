/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	char temp;
	int len;

	i = 0;

	/** get len of string */
	for (i = 0; s[i] != '\0'; i++)
		;
	len = i;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
