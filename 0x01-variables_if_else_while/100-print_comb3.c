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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i+1; j <= '9'; j++)
		{
			if (i != '8' && j != '9')
			{
				putchar(i);putchar(j);putchar(',');putchar(' ');
			}
			else
			{
				putchar(i);putchar(j);
			}
		}	
	}
	putchar('\n');
	return (0);
}
