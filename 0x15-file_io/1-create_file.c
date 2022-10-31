#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write to file
 * Return: 1 for success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, fileDescriptor, _write;

	if (filename == NULL)
		return (-1);
	/** create file  and open */
	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileDescriptor == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	/** get length of string */
	for (i = 0; text_content[i]; i++)
		;
	/** write to file */
	_write = write(fileDescriptor, text_content, i);
	if (_write == -1)
		return (-1);
	/** close file */
	close(fileDescriptor);
	return (1);
}
