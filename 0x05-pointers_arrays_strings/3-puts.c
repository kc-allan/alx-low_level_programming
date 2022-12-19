#include "main.h"
/**
 * _puts - Displays a string to stdout
 * @str: string to be displayed
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
