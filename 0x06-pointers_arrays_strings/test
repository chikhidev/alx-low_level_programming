#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (j < n)
    {
        if (src[j] != '\0')
        {
            dest[j] = src[j];
        }
        else
        {
            dest[j] = '\0';
            break;
        }
        j++;
        i++;
    }

    dest[i] = '\0';

    return (dest);
}
