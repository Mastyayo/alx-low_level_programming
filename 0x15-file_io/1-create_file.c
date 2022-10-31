#include "main.h"
#include "_strlen.c"

/**
 * create_file - creates a file
 * @filename: filename of file to be created
 * @text_content: null terminted string to write to file
 * Return: 1 if successful, or -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fo, fw, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);


	if (fo == -1)
		return (-1);

	length = _strlen(text_content);

	fw = write(fo, text_content, length);

	if (fo == -1 || fw == -1)
		return (-1);


	close(fo);
	return (1);
}
