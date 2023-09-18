#include <unistd.h>

/**
* _puts - Prints a string followed by a new line to stdout.
* @str: Pointer to the input string.
*
* Description: This function writes the characters of the string pointed to by
* @str to the standard output (stdout) and appends a newline character '\n'.
*/
void _puts(char *str)
{
		while (*str != '\0')
		{
				write(1, str, 1); /* Write one character at a time to stdout */
				str++;
		}

		write(1, "\n", 1); /* Write a newline character to stdout */
}
