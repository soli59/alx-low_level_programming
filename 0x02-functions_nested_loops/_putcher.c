#include <unistd.h>
#include "main.h"

/**
 * Description: _putcher - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success,
 * -1 on error, -1 is returned and error is set appropriately
*/
int _putcher(char c)
{
	return (write(1, &c, 1));
}
