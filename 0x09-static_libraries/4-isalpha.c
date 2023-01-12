#include "main.h"
/**
 * _isalpha - Checks if the parameter c is an alphabet
 *@c: character to be tested
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

