#include <stdio.h>
/**
 * main - cimoutes sum of all multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("%d, ", n);
		}
	}
	printf("\n");

	return (0);
}
