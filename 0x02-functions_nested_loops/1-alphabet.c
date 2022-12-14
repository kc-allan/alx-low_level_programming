#include <stdio.h>
#include <main.h>
/**
 * main - Calls print_alphabet()
 *
 * Return: 0
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
int main(void)
{
	print_alphabet();
	return (0);
}
