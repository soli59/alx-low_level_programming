#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print arguments based on the format string
 * @format: A string with format specifiers
 *
 * Description:
 * This function takes a format string and a variable number of arguments
 * and prints them based on the provided format string.
 * Supported format specifiers: 'c' (char), 'i' (integer), 'f' (float),
 * and 's' (string). If a string is NULL, it prints "(nil)" instead.
 */
typedef void (*print_function)(va_list);

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void print_float(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	print_function print_func;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_func = &print_char;
				break;
			case 'i':
				print_func = &print_int;
				break;
			case 'f':
				print_func = &print_float;
				break;
			case 's':
				print_func = &print_string;
				break;
			default:
				i++;
				continue;
		}

		printf("%s", separator);
		print_func(args);
		separator = ", ";
		i++;
	}

	printf("\n");

	va_end(args);
}
