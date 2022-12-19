#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints string in reverse
 * @s: string to be reversed
 * Return: void
 */
void puts_half(char *s)
{
	char r[1000];
	int begin, count = 0;
	
	while (s[count] != '\0')
	{
		count++;
	}
	int half = count / 2;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[half];
		half++;
	}
	char *i = r;
	while (*i)
	{
		_putchar(*i);
		i++;
	}
	_putchar('\n');
}
