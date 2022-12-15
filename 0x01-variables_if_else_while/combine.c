#include <stdio.h>

void factorial(int x)
{
	int fact = x * (x-1)*fact;
}
int main(void)
{
	int num = 3;
	int res = factorial (num);

	printf("%d\n",res);
}
