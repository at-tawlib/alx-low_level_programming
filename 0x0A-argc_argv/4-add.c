#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks whether the string is an integer or not
 * @s: string to check
 * Return: 0 if is integer and 1 if not integer
 */
int isInteger(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
			continue;
		else
			return (0);
	}
	return (1);
}

/**
* main -prints results of addition
* @argc: number of arguments
* @argv: parameters passed
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (isInteger(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
