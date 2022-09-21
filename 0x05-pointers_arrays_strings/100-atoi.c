/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
	int i, a, sign, last_digit;
	unsigned int number;

	number = 0;
	sign = 1;
	/**
	 * last_digit is changed to 1 only after we encounter a digit
	 * hence, when we encounter a non-digit after that,
	 * break the loop because the number has ended
	 */
	last_digit = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] == ' ' || s[i] == '+')
		{
			continue;
		}
		else if (s[i] <= 57 && s[i] >= 48)
		{
			/** convert to int **/
			a = s[i] - '0';
			number = number * 10 + a;
			last_digit = 1;
		}
		else
		{
			/** break if current value is not a digit i.e. after last_digit == 1 **/
			if (last_digit == 1)
				break;
			continue;
		}
	}
	number *= sign;
	return (number);
}
