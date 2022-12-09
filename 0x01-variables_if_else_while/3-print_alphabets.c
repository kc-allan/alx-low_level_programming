#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char small, big;
	small = 'a';
	big = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');
	return (0);
}
