#include <stdio.h>
/**
 * main - print different combinations of three digits
 * You can only use putchar six times maximum in your code
 *
 * Return: 0
 */
int main(void)
{
	int y, x, z;

	for (y = 0; y < 9; y++)
	{
		for (x = y + 1; x < 10; x++)
		{
			for (z = x + 1; x < 10; z++)
			{
				putchar((y % 10) + '0');
				putchar((x % 10) + '0');
				putchar((z % 10) + '0');

				if (y == 7 && x == 8 && z == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
