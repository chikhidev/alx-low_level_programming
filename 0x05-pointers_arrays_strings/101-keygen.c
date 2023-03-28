#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that generates random valid passwords
 * @void: Empty input
 *
 * Description: Program that generates random valid passwords
 * Return: 0 if works
 */
int main(void)
{
	int i = 0, random, sum;

	srand(time(NULL));
	sum = 2772;
	while (sum > 122)
	{
		random = (rand() % 100);
		printf("%c", random);
		sum -= random;
		i++;
	}
	printf("%c", sum);
	return (0);
}
