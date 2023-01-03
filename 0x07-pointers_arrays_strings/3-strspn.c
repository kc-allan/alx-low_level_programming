#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: initial string
 * @accept: prefix substring
 * Return: numbwr of bytes in s only present in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i;
	int k;

	for (i = 0; s[i] != '\0';)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				res++;
				break;
			}
			if (s[i] != accept[k] && accept[(k + 1)] == '\0')
				return (res);
		}
		i++;
	}
	return (res);
}

