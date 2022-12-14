#include "main.h"
/**
 * isalpha - Checks if a character c is an alphabet
 *
 * Return: 1 if c is a letter else returns 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

