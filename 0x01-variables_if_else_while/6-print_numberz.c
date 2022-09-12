#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 * we use ASCII 48-57 (0-9)
 * Return: 0 if success
 */
int main(void)
{
int alph = 48;
while (alph <= 57)
{
putchar(alph);
alph++;
}
putchar(10);
return (0);
}
