#include "main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int count = 0;
	int i;

	while (s[count])
	{
		++count;
	}
	for (i = count; i >= 0; --i)
	{
		_putchar(s[i - 1]);
	}
}
