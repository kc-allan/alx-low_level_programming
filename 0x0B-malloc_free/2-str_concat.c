#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concanates two strings
 * @s1: begin
 * @s2: end
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *result, *dest, *src;
	size_t len1, len2, i = 0;

	dest = s1;
	src = s2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		++len1;
	}
	while (s2[len2] != '\0')
	{
		++len2;
	}
	result = (char *)malloc((len1 + len2) + 1);
	if (result == NULL)
		return (0);
	for (i = 0; i < len1; ++i)
	{
		result[i] = dest[i];
	}
	for (i = 0; i < len2; ++i)
	{
		result[len1 + i] = src[i];
	}
	result[len1 + len2] = '\0';
	return (result);
}
