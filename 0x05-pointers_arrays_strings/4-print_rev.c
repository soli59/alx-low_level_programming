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
	while (*s != '\0')
	{
		s++;
	}

	s--; /* Move back one position to the last character */

	while (s >= 0)
	{
		write(1, s, 1); /* Write one character at a time to stdout in reverse */
		s--;
	}

	write(1, "\n", 1); /* Write a newline character to stdout */
}
