#include "main.h"
/**
 * _pow_recursion - returns x power y
 * @x: base
 * @y: power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
