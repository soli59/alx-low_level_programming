#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Description: This function locates the first occurrence of the character @c
 * in the string @s and returns a pointer to it. If the character is not found,
 * it returns NULL.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
		return (s + i);
	}

	return (NULL);
}
