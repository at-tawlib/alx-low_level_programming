#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 with only putchar
 * use the ASCII (48-57) which represents numbers
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
