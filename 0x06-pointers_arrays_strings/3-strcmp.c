#include "main.h"
/**
 * _strcmp - Compares strings lexographically
 * @s1: First string
 * s2: Second string
 * Return: integer greater, less than or equal to 0
 */
int _strcmp(char *s1, char *s2)
{
	int res;
	
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	res = (*s1 - *s2);
	return (res);
}
