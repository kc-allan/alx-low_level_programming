#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return duplicate of string str
 * @str: string to be duplicated
 * Return: NULL if str is null else pointer to str
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, n;

	if (str == 0)
		return (0);
	n = sizeof(str);
	dup = (char *)malloc(n * sizeof(char));
	if (dup == 0)
		return (0);
	else
	{
		for (i = 0; i < n; i++)
		{
			*(dup + i) = *(str + i);
		}
		return (dup);
	}
}
