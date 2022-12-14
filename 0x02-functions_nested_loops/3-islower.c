#include "main.h"
/**
 * _islower - Checks for lowercase
 *
 * Return: 0 or 1
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
