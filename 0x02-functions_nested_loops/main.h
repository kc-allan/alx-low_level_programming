#include <stdio.h>
#include <ctype.h>
/** 1
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
/** 2
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int b = 0;

	while (b < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		b++;
		putchar('\n');
	}
}
/** 3
 * _islower - Checks for lowercase
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
