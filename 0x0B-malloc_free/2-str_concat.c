#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: 1st dtring given
 * @s2: 2nd string given
 * Return: concated string
 */

char *str_concat(char *s1, char *s2)
{
char *concatinated;
int s1len = 0, s2len = 0, i = 0;

if (s1 != NULL)
{
while (s1[s1len])
{
s1len++;
}
}

if (s2 != NULL)
{
while (s2[s2len])
{
s2len++;
}
}

concatinated = malloc((s1len + s2len) *sizeof(char) + 1);

if (concatinated)
{
while (i < (s1len + s2len))
{
if (i < s1len)
concatinated[i] = *(s1 + i);
else
concatinated[i] = *(s2 + i - s1len);
i++;
}
concatinated[i + 1] = '\0';
return (concatinated);
}
return (NULL);
}
