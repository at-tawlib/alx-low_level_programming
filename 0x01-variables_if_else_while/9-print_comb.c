#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Return: 0 for success
 */
int main(void)
{
int digit = '0';
while (digit <= '9')
{
putchar(digit);
if (digit != '9')
{
putchar(',');
putchar(' ');
}
digit++;
}
putchar('\n');
return (0);
}
