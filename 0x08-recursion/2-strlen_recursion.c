#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
int ntr = 0;
if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
}
