#include <stdio.h>

/**
 * main - the main function
 * @argc: counter arg
 * @argv: args array
 * Return: 0
 */

int main(int argc, char *argv[])
{	
	int i = 0;
	(void) argc;
	while(argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
