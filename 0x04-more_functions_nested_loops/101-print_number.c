#include "main.h"
#include <limits.h>

/**
* print_number - outputs a number
* @n: an int given from main
*/

void print_number(int n)
{
	int x = n;
	int digit;
	int places = 1000000000;

	if (n < 0)
	{
		x = -n;
		_putchar('-');
	}
	if (n == INT_MAX || n == INT_MIN)
	{
		while (1)
		{
			if (n == INT_MAX)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('7');
				break;
			}
			else if (n == INT_MIN)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('8');
				break;
			}
		}
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		while (places > x)
			places /= 10;
		while (places > 0)
		{
			digit = x / places;
			_putchar((digit % 10) + '0');
			places /= 10;
		}
	}
}
