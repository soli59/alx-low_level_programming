#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: 1. done
 *         -1 error, -1 is returned and error is set appropriately
 */
int _putcher(char c)
{
	return (write(1, &c, 1);
}
