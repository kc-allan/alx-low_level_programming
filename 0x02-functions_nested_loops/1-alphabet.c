#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	for (char i = 'a'; i < 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
