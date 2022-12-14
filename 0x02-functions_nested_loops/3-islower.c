#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
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

int main(void)
{
	int r;
	r = _islower('y');
	putchar('\n');
	return (0);
}
