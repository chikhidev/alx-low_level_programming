#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: arg count
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[4] = {25, 10, 5, 2};
	int amount, counter = 0, i = 0;
	(void)argc;

	if (*(argv + 1))
	{
		amount = strtol(*(argv + 1), NULL, 10);
		while (i < 4)
		{
			while (coins[i] <= amount)
			{
				amount -= coins[i];
				counter++;
			}
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", counter);
	return (0);
}
