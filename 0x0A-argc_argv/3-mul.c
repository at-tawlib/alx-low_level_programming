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
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
