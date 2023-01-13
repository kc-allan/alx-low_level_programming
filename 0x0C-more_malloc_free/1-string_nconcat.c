#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res, *ptr;
	unsigned int len = 0;
	unsigned int i, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = s1;
	while (*s1)
	{
		len++;
		s1++;
	}
	res = (char *)malloc(len + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
	{
		res[i] = ptr[i];
	}
	for (k = 0; k <= n; k++)
	{
		res[i] = s2[k];
		i++;
	}
	res[i] = '\0';
	return (res);
}
