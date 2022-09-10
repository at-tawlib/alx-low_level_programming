#include <stdio.h>
/**
 * main -start of function
 * Return: 0 if success
 */
int main(void)
{
int letter, n;

for (letter = 97, n = 1; n < 27; letter++, n++)
{
putchar(letter);
}
putchar(10);
return (0);
}
