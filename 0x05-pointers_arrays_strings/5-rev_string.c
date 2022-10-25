#include "main.h"
/**
 * rev_string - Write a function that reverses a string
 * @s: input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char len = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
		a++;

	for (i = 0; i < a; i++)
	{
		a--;
		len = s[i];
		s[i] = s[a];
		s[a] = len;
	}
}
