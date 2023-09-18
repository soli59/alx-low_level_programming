#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	int length = _strlen(str);
	int start = (length % 2 == 0) ? length / 2 : (length - 1) / 2;

	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n');
}

/**
 * main - Entry point, calls puts_half function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "Holberton";

	puts_half(str);
	return (0);
}

