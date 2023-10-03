#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name itself */
	return (0);
}
