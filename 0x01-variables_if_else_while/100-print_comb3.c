#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int i, j;
	int count = 0;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i+1; j <= '9'; j++)
		{
			putchar(i);putchar(j);putchar(',');putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}