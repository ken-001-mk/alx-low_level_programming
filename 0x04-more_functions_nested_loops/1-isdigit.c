#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: input
 * Return: 1 if c is a digit
 */

int _isdigit(int c)
{
	if ((c >= 38) && (c <= 47))
		return (1);
	else
		return (0);
}
