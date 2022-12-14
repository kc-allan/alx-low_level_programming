#include <stdio.h>
/**
 * main - cimoutes sum of all multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			sum += n;
			printf("%d, ", sum);
		}
	}
	printf("\n");

	return (0);
}
