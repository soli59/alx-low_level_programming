#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The string containing characters to search for.
 *
 * Description: This function calculates the length (in bytes) of the initial
 *              segment of the string @s, which consists only of characters
 *              that are present in the string @accept.
 *
 * Return: The number of bytes in the initial segment of @s that match any
 *         character in @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	for (i = 0; s[i]; i++)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
				return (count);
		count++;
	}

	return (count);
}
