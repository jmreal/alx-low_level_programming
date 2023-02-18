#include <stdio.h>

/**
 * main - prints te numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar('\n');

	putchar('\n');

	return (0);
}
