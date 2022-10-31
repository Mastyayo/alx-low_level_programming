#include "main.h"
#include "_strlen.c"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to append
 * @text_content: string to appendi
 *
 * Return: 1 if file exist, or -1 if any failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	length = _strlen(text_content);

	fo = open(filename, O_WRONLY | O_APPEND);

	fw = write(fo, text_content, length);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);
	return (1);
}
