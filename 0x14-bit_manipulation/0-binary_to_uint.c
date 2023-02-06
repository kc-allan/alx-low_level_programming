#include "main.h"
/**
 * binary_to_uint - converts binary to usigned int
 * @b: pointer to a string of bits
 * Return: converted uint
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	const char *p = b;

	if (b == NULL)
	{
		return (0);
	}
	while (*p)
	{
		if (*p != '0' && *p != '1')
		{
			return (0);
		}
		result = (result << 1) | (*p - '0');
		p++;
	}
	return (result);
}
