/**
 * string_toupper - changes all lowercase of a string to uppercase
 * @str: string to convert
 * Return: void
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/** check if char is upppercase then covert to lowercase **/
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}

	return (str);
}
