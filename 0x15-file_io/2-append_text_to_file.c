#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: char
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0, w;

	if (!filename)
		return (-1);

	if (text_content)
		while (text_content[i])
			i++;

	fd = open(filename, O_WRONLY | O_APPEND);
	
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
