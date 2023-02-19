#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the last digit
 * Return: always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - -RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("%d and is greater than 5\n", a);
	}
	else if ((a < 6) && (a < 0))
	{
		printf("%d is less than 6 %d and not 0\n", a);
	}
	else
	{
		printf("%d and is  0\n", a);
	}
	return (0);
}
