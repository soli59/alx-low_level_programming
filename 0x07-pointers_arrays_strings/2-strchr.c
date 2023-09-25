#include "main.h"

/*
 * *_strchr - fills memory with a constant byte.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Description: This function locates the first occurrence of the character @c
 * in the string @s and returns a pointer to it. If the character is not found,
 * it returns \0.
 * Return: pointer to s
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

