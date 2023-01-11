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
	if (s1 != NULL)
	{
		while (*s1)
		{
			n++;
			s1++	;
		}
	}
	else
		s1 = "";
	if (s2 != NULL)
		while (*s2)
		{
			n++;
			s2++;
		}
	else
		s2 = "";
	res = (char *)malloc(n * sizeof(char));
	if (dest != NULL)
		for (i = 0; dest[i] != '\0'; i++)
		{
			res[i] = dest[i];
		}
	else
		i = 0;
	if (src != NULL)
		for (k = 0; src[k] != '\0'; k++)
		{
			res[i] = src[k];
			i++;
		}
	res[i] = '\0';
	return (res);
}
