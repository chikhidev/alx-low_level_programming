#include "main.h"
#include <stdlib.h>

/**
 * str_len - function that returns length of string
 * @str: string given
 * Return: number of characters
 */

int str_len(char *str)
{
	int counter = 0;

	while (str[counter])
		counter++;
	return (counter);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: fisrt string given
 * @s2: second string given
 * @n: limiter for the second string
 * Return: string concatinated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, s1_len, s2_len;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = str_len(s1);
	s2_len = str_len(s2);
	string = malloc(s1_len + s2_len + 1);

	if (string == NULL)
		return (NULL);

	while (i < (s1_len + s2_len))
	{
		if (i < s1_len)
			string[i] = s1[i];
		else
		{
			if ((i - s1_len) < n)
				string[i] = s2[i - s1_len];
			else
				break;
		}
		i++;
	}
	string[i] = '\0';
	return (string);
}
