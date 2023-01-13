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
	char *res, *ptr, *ptr1;
	unsigned int len1, len2, i, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = s1;
	ptr1 = s2;
	for (; *s1; s1++)
		len1++;
	for (; *s2; s2++)
		len2++;
	if (n >= len2)
		n = len2;
	res = (char *)malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
		res[i] = ptr[i];
	for (k = 0; k <= n; k++)
	{
		res[i] = ptr1[k];
		i++;
	}
	return (res);
}
