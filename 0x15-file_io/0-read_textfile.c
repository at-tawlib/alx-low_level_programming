#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of file
 * @letters: character count
 * Return: count of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t i;
	char ch;

	fp = fopen(filename, "r");
	if (fp == NULL || letters == 0 || filename == NULL)
		return (0);
	for (i = 0; i < letters && !feof(fp); i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fclose(fp);
	return (i);
}
