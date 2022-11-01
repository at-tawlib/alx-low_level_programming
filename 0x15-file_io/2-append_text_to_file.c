#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append text to
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, _write;

	if (filename == NULL)
		return (-1);
	/** open file */
	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	/** write to file */
	_write = write(fd, text_content, i);
	if (_write == -1)
		return (-1);
	/** close */
	close(fd);
	return (1);
}
