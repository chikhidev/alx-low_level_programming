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
	int res = 0;
	(void)argc;
	argv++;
	while (*argv)
	{
		if (isValid(*argv))
		{
			res += strtol(*argv, NULL, 10);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		argv++;
	}
	printf("%d\n", res);
	return (0);
}
