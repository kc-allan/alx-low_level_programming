#include "main.h"
/**
 * _isdigit - Checks a number from 0 - 9
 * @c: Parameter to be checked
 * Return: 1 if its a digit otherwise return 0
 */ 
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
