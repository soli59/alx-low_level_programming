#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings followed by a new line
 * @separator: The string to be printed between the strings (can be NULL)
 * @n: The number of strings passed to the function
 *
 * Description: This function prints the strings followed by a new line,
 * with the specified separator between them (if not NULL).
 * If a string is NULL, it prints "(nil)" instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
