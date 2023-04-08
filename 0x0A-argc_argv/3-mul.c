#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: counter arg
 * @argv: args array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;
	(void) argc;
	if (argv[1] && argv[2])
	{
		res = strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
