#include "main.h"

/**
<<<<<<< HEAD
* _strspn - Locates a character in a string
* @s: This is the main C string to be scanned.
* @accept: This is the string containing the list of characters to match in s
* Return: return count
**/
=======
* _strspn - function that gets the length of a prefix substring
*
* @accept: pointer to get the bytes
* @s: pointer to string char type
*
* Return: the number of bytes in the initial segment of s which consist only of bytes from accept
*/
>>>>>>> 999558edc3dffe9e0329032b053ce944da64ec77

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				count++;
				break;
			}

			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}

	return (count);
}
