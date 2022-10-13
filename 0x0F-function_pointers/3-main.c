#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	/** check if arguments are exactly 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/** get numbers and operator */
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	/** check if the right operator has been entered on operator is not NULL */
	if (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}
	/** check if first number is divided by 0, or modulus of 0 */
	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
