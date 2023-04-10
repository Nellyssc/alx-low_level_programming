#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates bytes for a buffer 1024
 * @file: The name of the file buffer is storing chars for
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);/* we allocating mem*/

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies wat is in one file to another
 * @argc: arguments to run
 * @argv: An array of pointers to the arguments.
 * Return: 0 successful
 * argument count is incorrect - exit code 97.
 * nonexistence file or unreadable - exit code 98.
 *file_when you cannot write in the file - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int dest, bef, r, w;
	char *buffer;

	while (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	bef = open(argv[1], O_RDONLY);
	r = read(bef, buffer, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (bef == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(bef, buffer, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(bef);
	close_file(dest);

	return (0);
}

