#include "main.h"

/**
 * main - print alpha 10 times
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num <= 9; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('n');
	}
	return (0);
}
