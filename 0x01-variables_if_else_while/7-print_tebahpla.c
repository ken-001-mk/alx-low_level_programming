#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar('\n');

	return (0);
}
