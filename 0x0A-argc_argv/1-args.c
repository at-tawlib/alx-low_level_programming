#include <stdio.h>

/**
* main - returns number or args passed
* @argc: number of arguments
* @argv: parameters passed
* Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
