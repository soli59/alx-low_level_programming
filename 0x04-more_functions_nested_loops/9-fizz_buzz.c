#include <stdio.h>
/**
 * main - Entry point for the Fizz-Buzz program.
 *
 * Description:
 *This program prints numbers from 1 to 100, replacing multi of 3 with "Fizz,"
 *multi of 5 with "Buzz," and multi of both with "FizzBuzz."
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("FizzBuzz\t");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz\t");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz\t");
		}
		else
		{
		printf("%d\t", i);
		}
	}

	printf("\n");

	return (0);
}
