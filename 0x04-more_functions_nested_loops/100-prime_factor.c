#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
	long largest = -1;

	/* Divide n by 2 until it's no longer divisible by 2 */
	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	/* Divide n by odd numbers starting from 3 */
	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}

	/* If n is still greater than 1, it's a prime factor */
	if (n > 1)
		largest = n;

	return largest;
}

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return 0;
}
