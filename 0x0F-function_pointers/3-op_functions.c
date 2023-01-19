#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: integer result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subrtacts two numbers
 * @a: first number
 * @b: second number
 * Return: integer result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: integer result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: integer result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - finds remainder of a division
 * @a: first number
 * @b: second number
 * Return: integer result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
