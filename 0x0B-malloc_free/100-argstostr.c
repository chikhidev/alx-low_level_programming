#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - counts the number of words in a string
 * @str: pointer to string
 * Return: number of words in the string
 */
int count_words(char *str)
{
int i = 0, count = 0, len = 0;

while (*(str + len))
len++;

while (i < len)
{
while (*(str + i) == ' ' && i < len)
i++;
if (i == len)
break;
count++;
while (*(str + i) != ' ' && i < len)
i++;
}
return (count);
}
/**
 * strtow - splits a string into words
 * @str: pointer to string
 * Return: double pointer to array of pointers
 */
char **strtow(char *str)
{
int i, j, len, wordsize, count;
char **p;

if (str == NULL || *str == '\0')
return (NULL);

len = count_words(str);
p = malloc((len + 1) * sizeof(char *));
if (p == NULL)
return (NULL);

i = j = 0;
while (i < len)
{
while (str[j] == ' ')
j++;
wordsize = 0;
while (str[j + wordsize] != ' ' && str[j + wordsize] != '\0')
wordsize++;
p[i] = malloc((wordsize + 1) * sizeof(char));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
for (wordsize = 0; str[j] != ' ' && str[j] != '\0'; j++, wordsize++)
p[i][wordsize] = str[j];
p[i][wordsize] = '\0';
i++;
}
p[i] = NULL;
return (p);
}

