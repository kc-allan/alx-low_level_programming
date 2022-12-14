#include "main.h"
/**
 * times_table - Displays the 9 by 9 times table
 * Return: 0
 */
void times_table(void)
{
	char line, pos = 0;

	for (line = 0; line < 9; line++)
	{
		for (pos = 0; pos < 9; pos++)
		{
			if (line == 9)
			{
				_putchar((line * pos) + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((line * pos) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
