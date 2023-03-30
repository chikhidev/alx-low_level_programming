#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: difference between the ASCII values of the first non-matching
 *         characters of the two strings, or 0 if the strings are identical
 */

int _strcmp(char *s1, char *s2)
{
        int counter = 0;
        int res = 0;

        while (s1[counter] != '\0' || s2[counter] != '\0')
        {
                if (s1[counter] == s2[counter])
                        counter++;
                else
                {
                        res += s1[counter];
                        res -= s2[counter];
                        break;
                }
        }

        return (res);
}

