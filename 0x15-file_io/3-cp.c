#include "main.h"

/**
* src - OPEN SRC
* @av: argv
* Return: int
*/

int src(char **av)
{
int i;

i = open(*(av + 1), O_RDONLY);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(av + 1));
exit(98);
}
return (i);
}

/**
* main - copy file
* @ac: argc
* @av: argv
* Return: int
*/

int main(int ac, char *av[])
{
int src_fd, copy_fd, r;
char ptr[1024];
if (ac != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
src_fd = src(av);
copy_fd = open(*(av + 2), O_TRUNC | O_CREAT | O_WRONLY, 0664);
if (copy_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(av + 2));
exit(99);
}
while ((r = read(src_fd, ptr, 1024)) > 0)
{
if (write(copy_fd, ptr, r) != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", *(av + 2));
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(av + 1));
exit(98);
}
if (close(src_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", src_fd);
exit(100);
}
if (close(copy_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", copy_fd);
exit(100);
}
return (0);
}

