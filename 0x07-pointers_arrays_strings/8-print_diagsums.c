#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The square matrix of integers.
 * @size: The size of the matrix.
 *
 * Description: This function prints the sum of the two diagonals of a square
 * matrix of integers in the specified format.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of diagonal 1 = %d\n", sum_diag1);
	printf("Sum of diagonal 2 = %d\n", sum_diag2);
}
