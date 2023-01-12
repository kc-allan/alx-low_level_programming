#include <stdio.h>
#include <stdlib.h>
/**
 * main - multuolies two numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 (success) 1 (error)
 */
int main(int argc, char *argv[])
{
	int res;
	int x, y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
	}
	res = x * y;
	printf("%d\n", res);
	return (0);
}
