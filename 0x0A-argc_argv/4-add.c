#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
/**
 * main - adds numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0(success) 1 (error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *endptr;
	long value;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		value = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += value;
		}
	}
	printf("%d\n", sum);
	return (0);
}
