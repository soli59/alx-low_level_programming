#include"main.h"

/**
 * print_alphabet -  uses  _putchar function to print the alphaber a - z.
 *
 * Description:
 * This function prints the lowercase English alphabet from 'a' to 'z'
 * using the _putchar function
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
