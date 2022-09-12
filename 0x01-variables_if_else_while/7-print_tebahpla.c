#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e
 * we use ASCII 97-122(a - z)
 * Return: 0 if success
 */
int main(void)
{
int alph = 122;
while (alph >= 97)
{
putchar(alph);
alph--;
}
putchar(10);
return (0);
}
