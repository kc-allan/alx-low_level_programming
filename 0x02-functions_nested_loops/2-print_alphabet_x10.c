#include "main.h"
/**
 * main - Prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		c++;
		_putchar('\n');
	}
}
