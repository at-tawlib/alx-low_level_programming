#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
int a, b, n;
for (a = 97, n = 1; n < 27; a++, n++)
{
putchar(a);
}
for (b = 65, n = 1; n < 27; b++, n++)
{
putchar(b);
}
putchar(10);
return (0);
}
