#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates operations
 * @argc: argument count
 * @argv: argument array
 * Return: result of operation
 */
int main (int argc, char *argv[])
{
	int a, b, res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	res = func(a, b);
	printf("%d\n", res);
	return (0);
}
