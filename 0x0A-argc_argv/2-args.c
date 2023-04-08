#include <stdio.h>

/**
 * main - the main function
 * @argc: counter arg
 * @argv: args array
 * Return: 0
 */

int main(int argc, char *argv[])
{	
	(void) argc;
	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
