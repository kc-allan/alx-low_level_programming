#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum amount of coins to make change
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int amount;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount < 25 && amount >= 10)
			amount -= 10;
		else if (amount < 10 && amount >= 5)
			amount -= 5;
		else if (amount < 5 && amount >= 2)
			amount -= 2;
		else
			amount -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
