#include <stdio.h>
/**
 * main -start of function
 * we use ASCII 97-122(a - z), 65-90 (A-Z), 10 = '\n'
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
alph = 65;
while (alph <= 90)
{
putchar(alph);
alph++;
}
putchar(10);
return (0);
}
