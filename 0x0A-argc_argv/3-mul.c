#include <stdio.h>
#include <stdlib.h>

/**
* main -prints results of multiplication
* @argc: number of arguments
* @argv: parameters passed
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
