/**
 * cap_string - capitalizes all words of a string
 * @s: string to use for capitalization
 * Return: void
 */
char *cap_string(char *s)
{
	int i;

	/** get length of string **/
	for (i = 0; s[i] != '\0'; i++)
	{
		/**
		 * if char is any of the values, capitalize the next char
		 * use ASCII value because betty expects less than 90 chars
		 */
		if (s[i] == ' ' || s[i] == '\t' || s[i] == 10 || s[i] == 44)
		{
			if (s[i + 1] >= 'a' && s[i] <= 'z')
				s[i + 1] -= 32;
		}

		if (s[i] == 63 || s[i] == 34 || s[i] == 40 || s[i] == 46 || s[i] == 33)
		{
			if (s[i + 1] >= 'a' && s[i] <= 'z')
				s[i + 1] -= 32;
		}

		if (s[i] == 41 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] >= 'a' && s[i] <= 'z')
				s[i + 1] -= 32;
		}
	}

	return (s);
}
