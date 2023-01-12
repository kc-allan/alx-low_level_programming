#include <stdio.h>
/**
 * main - prints number of arguments presented
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (argc = 1; argv[argc]; argc++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
