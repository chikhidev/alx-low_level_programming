#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to read.
 * @letters: number of chars
 * Return: number of charachets
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, r, w;
char *ptr;

if (!filename)
return (0);

ptr = malloc(sizeof(char) * letters);

if (!ptr)
return (0);

fd = open(filename, O_RDONLY, 600);

if (fd == -1)
{
free(ptr);
return (0);
}

r = read(fd, ptr, letters);

if (r == -1)
{
free(ptr);
return (0);
}
w = write(STDOUT_FILENO, ptr, r);

if (w == -1 || w != r)
return (0);
free(ptr);
close(fd);

return (w);
}
