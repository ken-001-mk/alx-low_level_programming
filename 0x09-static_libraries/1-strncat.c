#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int mol = 0, dest_yan = 0;

	while (dest[mol++])
		dest_yan++;
	for (mol = 0; src[mol] && mol < n; mol++)
		dest[dest_yan++] = src[mol];
	return (dest);
}
