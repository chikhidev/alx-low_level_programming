#include "main.h"
/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written as an unsigned char
 *         cast to an int. On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	ssize_t num_written;

	num_written = write(1, &c, 1);
	if (num_written == -1)
	{
		/* Error handling code */
		return -1;
	}

	return (int)num_written;
}

