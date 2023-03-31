#include "main.h"
/**
 * *leet - encodes a string into 1337
 *
 * @c: char to check
 *
 * Return: 0 is success
 */
char *leet(char *c)
{
	char a[] = "aeotlAEOTL";
	char b[] = {'4', '3', '0', '7', '1',
		    '4', '3', '0', '7', '1'};
	int i = 0, j = 0;

	while (c[i] != '\0')
  {
		while (a[j] != '\0')
    {
			if (c[i] == a[j])
				c[i] = b[j];
      j++;
    }
    i++;
  }
	return (c);
}
