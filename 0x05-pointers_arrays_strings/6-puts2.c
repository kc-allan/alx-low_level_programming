#include "main.h"
/**
 * puts2 - Prints every character of a string
 * @str: String to be printed
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str == '\\')
		{
			break;
		}
		else
		{
			_putchar(*str);
			str += 2;
		}
	}
	_putchar('\n');
}
