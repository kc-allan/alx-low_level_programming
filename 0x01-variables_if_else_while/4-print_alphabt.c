#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	do {
		if (ch != 'e' || ch != 'q')
		{
			putchar(ch);
			ch++;
		}
	} while (ch <= 'z');
	putchar('\n');
	return (0);
}
