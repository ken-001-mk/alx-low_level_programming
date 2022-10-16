#include <stdio.h>
/**
 * main - print different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int ya;
	int yb;

	for (ya  = 0; ya < 9; ya++)
	{
		for (yb = 0; yb < 10; yb++)
		{
			putchar((ya % 10) + '0');
			putchar((yb % 10) + '0');

			if (ya == 8 && yb == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
