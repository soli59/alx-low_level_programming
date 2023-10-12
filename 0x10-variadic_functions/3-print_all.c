#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print arguments based on the format string
 * @format: A string with format specifiers
 *
 * Description:  function prints arguments based on the provided format string.
 * Supported format specifiers: 'c' (char), 'i' (integer),.
 * 'f' (float), 's' (string).
 * If a string is NULL, it prints "(nil)" instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("%s(nil)", separator);
				else
					printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
