#include "main.h"
#include <stdlib.h>
#include <stdio.h>

//**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
char *out;
int count = 0, i = 0, j = 0, index = 0;

if (ac == 0 || av == NULL)
return (NULL);
while (av[i] != NULL)
{
j = 0;
while (av[i][j] != '\0')
{
count++;
j++;
}
count++;
i++;
}
out = malloc((count + 1) * sizeof(char));

if (out == NULL)
return (NULL);

i = j = index = 0;
while (index < count)
{
if (av[i][j] == '\0')
{
out[index] = '\n';
i++;
index++;
j = 0;
}
if (index < count - 1)
out[index] = av[i][j];

j++;
index++;
}
out[index] = '\0';

return (out);
}
