#include "main.h"
/**
 * _isdigit - Checks a number from 0 - 9
 * @c: Parameter to be checked
 * Return: 1 if its a digit otherwise return 0
 */ 
int _isdigit(int c)
{
	for (i = 0; i <= 10; i++)
	{
		if (i == c)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
		}
	}
}
