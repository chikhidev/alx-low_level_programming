#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring
*
* @accept: pointer to get the bytes
* @s: pointer to string char type
*
* Return: the number of bytes in the initial segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0, b;

while (s[a])
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
{
break;
}
b++;
}
if (!accept[b])
{
break;
}
a++;
}

return (a);
}
