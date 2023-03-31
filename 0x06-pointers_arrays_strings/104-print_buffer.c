#include "main.h"
#include <stdio.h>

/**
* isPrintableASCII - determines if n is a printable ASCII char
* @n: integer
* Return: 1 if true, 0 if false
*/
int isPrintableASCII(int n)
{
return (n >= 32 && n <= 126);
}

/**
* printHexes - print hex values for string b in formatted form
* @b: string to print
* @start: starting position
* @end: ending position
*/
void printHexes(char *b, int start, int end)
{
int i = 0;

while (i < 10)
{
if (i < end)
printf("%02x", *(b + start + i));
else
{
printf("  ");
}
if (i % 2)
{
printf(" ");
}
i++;
}
}

/**
* printASCII - print ascii values for string b,
* formatted to replace nonprintable chars with '.'
* @b: string to print
* @start: starting position
* @end: ending position
*/
void printASCII(char *b, int start, int end)
{
int ch, i = 0;

while (i < end)
{
ch = *(b + i + start);
if (! (ch >= 32 && ch <= 126))
ch = 46;
printf("%c", ch);
i++;
}
}

/**
* print_buffer - prints a buffer
* @b: string
* @size: size of buffer
*/
void print_buffer(char *b, int size)
{
int s = 0, e;

if (size > 0)
{
while (s < size)
{
e = (size - s < 10) ? size - s : 10;
printf("%08x: ", s);
printHexes(b, s, e);
printASCII(b, s, e);
printf("\n");
s += 10;
}
}
else
printf("\n");
}
