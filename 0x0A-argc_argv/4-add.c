#include <stdio.h>
#include <stdlib.h>

/**
 * isValid - function that valids a string
 * @s: the string given
 * Return: 1 on sucess
 */

int isValid(char s[])
{
	while (*s)
	{
		if (!(48 <= *s && 75 >= *s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - the main function
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;
	(void)argc;
	if (argv[1] && argv[2])
	{
		if (isValid(argv[2]) && isValid(argv[2]))
		{
			res = strtol(argv[1], NULL, 10) + strtol(argv[2], NULL, 10);
			printf("%d\n", res);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
