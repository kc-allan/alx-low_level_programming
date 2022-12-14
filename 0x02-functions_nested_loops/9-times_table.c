#include "main.h"
/**
 * times_table - Displays the 9 by 9 times table
 * Return: 0
 */
void times_table(void)
{
	int line, pos;

	for (pos = 0; pos < 9; pos++)
	{
		for (line = 0; line < 9; line++)
		{
			if (line == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('0' + (line * pos));
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
