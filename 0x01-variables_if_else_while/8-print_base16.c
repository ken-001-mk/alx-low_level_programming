#include <stdio.h>
/**
 * main - prints numbers of base 16 in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int y;
	char b;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');

	for (b = 'a'; b <= 'f'; b++)
		putchar (b);

	putchar('\n');
	return (0);
}
