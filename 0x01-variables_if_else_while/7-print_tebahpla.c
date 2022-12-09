#include <stdio.h>
/**
 * main -Wntry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char rev = 'z';
	while (rev <= 'a')
	{
		putchar(rev)
		rev-=1;
	}
	putchar('\n');
	return (0);
}
