#include "main.h"

/**
 * exit_error - exists when there is a failure with exit details
 * @d: file causing error
 * @code: exit code
 * Return: null
 */
void exit_error(char *d, int code)
{
	switch (code)
	{
		case 98:
			dfprintf(STDERR_FILENO, "Error: Can't read from file %d\n", d);
			exit(98);
		case 99:
			dfprintf(STDERR_FILENO, "Error: Can't write to %d\n", d);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
			exit(100);
	}
}

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd, file_from, file_to, _write, _close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_error(argv[1], 98);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
		exit_error(argv[2], 99);
	do {
		fd = read(file_from, buffer, 1024);
		if (fd == -1)
			exit_error(argv[1], 98);
		_write = write(file_to, buffer, fd);
		if (_write == -1)
			exit_error(argv[2], 99);
	} while (fd == 1024);
	_close = close(file_from);
	if (_close == -1)
		exit_error(argv[1], 100);
	_close = close(file_to);
	if (_close == -1)
		exit_eror(argv[2], 100);
	return (0);
}
