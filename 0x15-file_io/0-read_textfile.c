#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * @filename: name of file
 * @letters: character count
 * Return: count of characters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, _read, _write;
	char buff[BUFSIZ];

	if (filename == NULL || letters == 0)
		return (0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);
	_read = read(fileDescriptor, buff, letters);
	if (_read == -1)
		return (0);
	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1)
		return (0);
	if (_read != _write)
		return (0);

	close(fileDescriptor);
	return (_write);
}
