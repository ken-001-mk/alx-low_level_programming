#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int mol1 = 0, mol2;
	char rave[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[mol2])
	{
		for (mol2 = 0; mol2 <= 7; mol2++)
		{
			if (str[mol1] == rave[mol2] ||
			    str[mol1] - 32 == rave[mol2])
				str[mol1] = mol2 + '0';
		}

		mol1++;
	}

	return (str);
}
