#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int mol = 0;

	while (str[mol])
	{
		while (!(str[mol] >= 'a' && str[mol] <= 'z'))
			mol++;

		if (str[mol - 1] == ' ' ||
		    str[mol - 1] == '\t' ||
		    str[mol - 1] == '\n' ||
		    str[mol - 1] == ',' ||
		    str[mol - 1] == ';' ||
		    str[mol - 1] == '.' ||
		    str[mol - 1] == '!' ||
		    str[mol - 1] == '?' ||
		    str[mol - 1] == '"' ||
		    str[mol - 1] == '(' ||
		    str[mol - 1] == ')' ||
		    str[mol - 1] == '{' ||
		    str[mol - 1] == '}' ||
		    mol == 0)
			str[mol] -= 32;

		mol++;
	}

	return (str);
}
