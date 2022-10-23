#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{

	char y;

	for (y = '0'; y <= '9'; y++)
	{
		if (!(y == '2' || y == 4))
			_putchar(y);
	}

	_putchar('\n');
}
