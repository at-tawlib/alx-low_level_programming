#include <stdio.h>
/**
 * main - prints alphabet in lowercase except q and except
 * Return: 0 if successful
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'e' || alphabet == 'q')
{
continue;
}
putchar(alphabet);
}
putchar('\n');
return (0);
}
