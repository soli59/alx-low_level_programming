#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing characters to search for.
 *
 * Description: This function searches the string @s for the first occurrence
 *              of any character in the string @accept.
 *
 * Return: A pointer to the first occurrence in @s that matches any character
 *         in @accept, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *result = NULL;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				result = &s[i];
				return (result);
			}
		}
	}

	return (result);
}
