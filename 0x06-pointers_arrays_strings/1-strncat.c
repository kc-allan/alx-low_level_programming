#include "main.h"
/**
 * _strncat - Concanates two strings
 * @dest: Original string
 * @src: Appended string
 * @n: number of bytes from src
 * Return: pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
