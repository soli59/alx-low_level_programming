#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to char.
 * @to: The string to set as the value.
 *
 * Description: This function sets the value of a pointer to a char to the
 * address of the given string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
