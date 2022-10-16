#include <stdio.h>
/**
 * main - print numbers of base 10 from 0
 * You are not allowed to use any variable of type char
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
		putchar((y % 10) + '0');

	putchar('\n');

	return (0);
}
