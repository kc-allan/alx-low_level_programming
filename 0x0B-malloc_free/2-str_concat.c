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
	size_t i, k = 0;
	size_t len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	dest = s1;
	src = s2;
	while (s1[len++] != '\0')
	while (s2[len++] != '\0')
	result = (char *)malloc(len);
	if (result == NULL)
		return (NULL);
	for (i = 0; dest[i] != '\0'; i++)
	{
		result[i] = dest[i];
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		result[i] = src[k];
		i++;
	}
	result[i] = '\0';
	return (result);
}
