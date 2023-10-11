#include "your_header.h"

/**
 * print_name - Print a name using a given function
 * @name: The name to be printed
 * @f: A function pointer that takes a char pointer as an argument
 *
 * Description: This function use provided function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
