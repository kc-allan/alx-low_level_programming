#include <stdio.h>
/**
 * main - Calls print_alphabet()
 *
 * Return: 0
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
int main(void)
{
	print_alphabet_x10();
	return (0);
}
