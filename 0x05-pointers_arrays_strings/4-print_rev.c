#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the input string.
 *
 * Description: This function prints the characters of the string pointed to by
 * @s in reverse order to the standard output (stdout) and appends a newline
 * character '\n'.
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--; /* Move back one position to the last character */

	while (end >= s)
	{
		write(1, end, 1); /* Write one character at a time to stdout in reverse */
		end--;
	}

	write(1, "\n", 1); /* Write a newline character to stdout */
}
