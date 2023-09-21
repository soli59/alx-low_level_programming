#include <stdio.h>

/**
 * _strncat - Concatenates two strings using at most 'n' bytes from 'src'.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes from 'src' to concatenate.
 *
 * Return: A pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Move to the end of 'dest' */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Concatenate up to 'n' bytes from 'src' to 'dest' */
	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Null-terminate the resulting string */
	*dest_ptr = '\0';

	return (dest);
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";
	int n = 5;

	_strncat(str1, str2, n);
	printf("Concatenated string: %s\n", str1);

	return (0);
}
