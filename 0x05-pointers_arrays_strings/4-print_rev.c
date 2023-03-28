#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: int to check
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int string = 0;

	for (string = 0; s[string] != '\0'; string++)
		;
	for (string--; string >= 0; string--)
		_putchar(s[string]);

	_putchar('\n');
}
