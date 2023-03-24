#include "main.h"
#include <stdio.h>

/**
* _isdigit - checkes if c is digit
* @c: variable param
* Return: 1 if true 0 if false
*/

int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
		return (1);
	return (0);
}
