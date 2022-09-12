#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: 0 for success
 */
int main(void)
{
int digit = 48;
int digit2 = 48;
while (digit <= 57)
{
while (digit2 <= 57)
{
if (digit != digit2)
{
putchar(digit);
putchar(digit2);
if (!(digit == 56 && digit2 == 57))
{
putchar(',');
putchar(' ');
}
}
digit2++;
}
digit++;
digit2 = digit;
}
putchar(10);
return (0);
}
