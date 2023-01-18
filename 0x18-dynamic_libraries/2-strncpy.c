#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int mol = 0, src_yan = 0;

	while (src[mol++])
		src_yan++;

	for (mol = 0; src[mol] && mol < n; mol++)
		dest[mol] = src[mol];

	for (mol = src_yan; mol < n; mol++)
		dest[mol] = '\0';

	return (dest);
}
