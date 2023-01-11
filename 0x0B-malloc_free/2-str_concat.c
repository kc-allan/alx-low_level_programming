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
	unsigned int i, k;
	unsigned int n = 0;
	char *res, *dest, *src;

	dest = s1;
	src = s2;
	while (*s1)
	{
		n++;
		s1++;
	}
	while (*s2)
	{
		n++;
		s2++;
	}
	res = (char *)malloc(n * sizeof(char));
	for (i = 0; dest[i] != '\0'; i++)
	{
		res[i] = dest[i];
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		res[i] = src[k];
		i++;
	}
	res[i] = '\0';
	return (res);
}
