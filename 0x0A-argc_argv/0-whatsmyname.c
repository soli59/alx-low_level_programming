#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success, 1 on failure.
*/
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
	printf("%s\n", argv[0]);
	return (0);
	}
	return (1);
}
