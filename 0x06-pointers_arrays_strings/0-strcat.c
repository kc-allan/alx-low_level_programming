#include "main.h"
/**
 * _strcat - Concanates two strings
 * @dest: Original string
 * @src: Appended string
 * Return: pointer to the final string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;
	
	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
