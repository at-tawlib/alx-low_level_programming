#include <stdio.h>

/**
* main - returns name of program
* @argc: number of arguments
* @argv: parameters passed
* Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
