#include "main.h"

/**
 * puts2 - Prints every other charr of a string, starting with the first charr.
 * @str: The input string.
 *
 * Description: This function prints every other character of the string @str,
 * starting with the first character, followed by a new line.
 */
void puts2(char *str)
{
	if (str)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}

		_putchar('\n');
	}
}
