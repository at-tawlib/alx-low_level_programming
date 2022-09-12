#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 for success
 */
int main(void)
{
int hex = '0';
while (hex <= '9')
{
putchar(hex);
hex++;
}
hex = 'a';
while (hex < 'g')
{
putchar(hex);
hex++;
}
putchar('\n');
return (0);
}
