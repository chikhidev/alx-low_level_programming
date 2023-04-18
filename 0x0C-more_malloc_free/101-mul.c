#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
**/

int main(int argc, char *argv[])
{
int i = 1, j;
unsigned long M;

if (argc != 3)
{
printf("Error\n");
exit(98);
}

while (i < argc)
{
j = 0;
while (argv[i][j] != '\0')
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
j++;
}
i++;
}

M = atol(argv[1]) * atol(argv[2]);
printf("%lu\n", M);
return (0);
}

