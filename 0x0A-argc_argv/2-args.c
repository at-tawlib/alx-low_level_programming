#include <stdio.h>

/**
* main -prints all arguments passed
* @argc: number of arguments
* @argv: parameters passed
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
