#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: is a char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
