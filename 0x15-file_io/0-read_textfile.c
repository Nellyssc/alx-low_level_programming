#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to read
 * @letters: letters to be read
 * Return: w-number of bytes read and printed,0 when unsuccessful,or null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fil;
	ssize_t w;
	ssize_t t;

	fil = open(filename, O_RDONLY);/* it will open the file name*/
	if (fil == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);/*here we alocating memory*/
	t = read(fil, buf, letters);/* read n writing of  wat we find in fil*/
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fil);
	return (w);
}
