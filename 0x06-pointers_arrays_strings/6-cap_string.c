#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: pointer to the string to be capitalized
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *a)
{
int i = 0;

while (a[i] != '\0')
{
if (i == 0)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
}
if (a[i] == ' ' || a[i] == '\n' || a[i] == ',' || a[i] == '\t' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
{
if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
{
a[i + 1] = a[i + 1] - 32;
}
}
}
i++;
return (a);
}

