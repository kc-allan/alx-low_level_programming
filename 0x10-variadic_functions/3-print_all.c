#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char curr, *str;

	va_start(args, format);
	i = 0;
	/* iterate through the format string */
	while ((curr = format[i]) != '\0')
	{
		/* check the current character and print accordingly */
		if (curr == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (curr == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (curr == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (curr == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
