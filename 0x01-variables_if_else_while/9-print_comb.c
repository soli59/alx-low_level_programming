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

	while (n <= 9 )
	{
		putchar( n + 48 );
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	putchar('\n');
	return (0);
}
