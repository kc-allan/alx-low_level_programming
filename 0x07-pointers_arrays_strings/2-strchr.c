#include "main.h"
/**
 * _strchr - print match
 * @s: array
 * @c: char
 * Return: char return
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (0);
}
