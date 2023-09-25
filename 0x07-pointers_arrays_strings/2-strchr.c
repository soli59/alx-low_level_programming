#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
*/
char *_strchr(char *s, char c)
{
	int it;

	for (it = 0; s[it] >= '\0', it++)
	{
		if (s[it] == c)
		{
			return (s + it);
		}
	}

	return ('\0');

