#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char **argv)
{
	int index = 0, num_bytes;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	while (index < num_bytes)
	{
		printf("%02hhx", *((char *)(main + index)));
		if (num_bytes > index + 1)
			printf(" ");
		index++;
	}

	printf("\n");
	return (0);
}


