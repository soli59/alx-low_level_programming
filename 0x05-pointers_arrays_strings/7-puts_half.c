#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = 0;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting position for the second half */
	int start = length / 2;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
