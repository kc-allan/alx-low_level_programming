#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints string in reverse
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	char r[1000];
	int begin, end, i, count = 0;
	
	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
	for (i = 0; i < count; i++)
	{
		_putchar(r[i]);
	}
	s = r;
	_putchar('\n');
}
