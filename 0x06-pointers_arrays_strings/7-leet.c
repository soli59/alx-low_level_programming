#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char leetMap[] = "aAeEoOtTlL";
	char leetReplace[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (str[i] == leetMap[j])
			{
				str[i] = leetReplace[j];
				break;
			}
		}
	}

	return (str);
}
