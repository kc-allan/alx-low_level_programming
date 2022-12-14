#include "main.h"
/**
 * _strncpy - Copies first n characters from src to dest
 * @dest: Original sting
 * @src: string from which to be copied
 * @n: number of characters to be copied
 * Return: pointer to final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;
	
	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
