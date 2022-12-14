#include "main.h"
/**
 * times_table - Displays the 9 by 9 times table
 * Return: 0
 */
void times_table(void)
{
	int line, pos, prod;

	for (line = 0; line < 9; line++)
	{
		for (pos = 0; pos < 9; pos++)
		{
			prod = line * pos;
			if (prod <= 9)
			{
				_putchar((prod) + '0');
				_putchar(',');
 30                             _putchar(' ');
			}
			else if (line == 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
