#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n++)
	if (n < 10)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
