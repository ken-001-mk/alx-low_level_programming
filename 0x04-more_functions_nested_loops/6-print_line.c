#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: void
 */
void print_line(int n)
{
	int mo;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (mo = 1; mo <= n; mo++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
