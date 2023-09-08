#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10 from 0 to 9.
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}

		putchar('\n');

	return (0);
}
