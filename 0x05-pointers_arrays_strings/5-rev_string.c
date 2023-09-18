#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function reverses the charss in the string @s in place.
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;
	int start = 0;

	if (s)
	{
		while (s[length] != '\0')
		{
			length++;
		}

		length--;

		while (start < length)
		{
			temp = s[start];
			s[start] = s[length];
			s[length] = temp;

			start++;
			length--;
		}
	}
}

