#include <unistd.h>
/**
 * main - prints character provided as parameter
 *
 * Returns: 1 (Success)
 */
int _putchar(char ch)
{
	return (write(1, &ch ,1));
}
