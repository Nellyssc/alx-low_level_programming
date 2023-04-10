#include "main.h"

/**
 * create_file - file creation
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a string to write to the file
 * Return: If successful 1 if unsuccessful -1
 */
int create_file(const char *filename, char *text_content)
{
	int w, fil, len = 0;

	if (filename == NULL)/*this is when no name is on the database file*/
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fil = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fil, text_content, len);

	if (w == -1 || fil == -1)
		return (-1);

	close(fil);

	return (1);/* when pg runs succsessful*/
}
