#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e
 * we use ASCII 97-122(a - z)
 * Return: 0 if success
 */
int main(void)
{
int alph = 97;
while (alph <= 122)
{
if (alph != 101 && alph != 113)
{
putchar(alph);
}
alph++;
}
putchar(10);
return (0);
}
