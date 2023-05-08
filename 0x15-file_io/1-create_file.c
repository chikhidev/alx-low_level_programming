#include "main.h"

/**
 * create_file - creats file
 * @filename: file to read.
 * @text_content: content
 * Return: number of charachets
 */

int create_file(const char *filename, char *text_content)
{
int fd, i = 0, w;

if (!filename)
return (-1);

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);

if (fd == -1)
return (-1);

if (text_content)
{
while (text_content[i])
i++;

w = write(fd, text_content, i);
}

if (w == -1)
return (-1);

close(fd);

return (1);
}
