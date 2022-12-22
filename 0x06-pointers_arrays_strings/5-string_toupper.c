#include "main.h"
/**
 * string_toupper - Converts characters of a string to uppercase
 * @char *: points to characters in the string
 * Return: pointer to converted string array
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		else
			continue;
	}
	str[i] = '\0';
	return (str);
}
