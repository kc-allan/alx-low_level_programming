#include <unistd.h>
/**
 * main - Prints _putchar
 *
 * Return: 0 (Success)
 */
int _putchar(char ch)
{
	return (write(1, &ch ,1));
}
