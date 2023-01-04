#include "main.h"
#include <stdio.h>
/**
 * _strchr - print match
 * @s: array
 * @c: char
 * Return: char return
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int k = 0;


	for (i = 0; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				s = &s[i];
				return(s);
			}
		}
	}
	return (0);
}
