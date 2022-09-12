#include <stdio.h>
/**
 * main -start of function
 * we use ASCII 97-122(a - z)
 * Return: 0 if success
 */
int main(void)
{
int alph = 97;
while (alph <= 122)
{
putchar(alph);
alph++;
}
putchar(10);
return (0);
}
