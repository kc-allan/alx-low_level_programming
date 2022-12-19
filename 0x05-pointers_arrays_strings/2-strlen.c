#include "main.h"
/**
 * _strlen - Retuens length of a string
 * @*s: string parameter
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
