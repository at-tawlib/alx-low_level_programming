#include <stdio.h>
/**
 * main - print lowercase in reverse
 * ASCII values (97-122) for lowercase (a-z)
 * Return: 0 for success
 */
int main(void)
{
int ascii;
for (ascii = 122; ascii >= 97; ascii--)
{
putchar(ascii);
}
putchar('\n');
return (0);
}
