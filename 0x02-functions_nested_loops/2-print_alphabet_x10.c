#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets 10 times
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char ch;

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
int main(void)
{
	print_alphabet_x10();
	return (0);
}
