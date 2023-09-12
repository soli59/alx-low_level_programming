#include"main.h"

/**
 * print_alphabet use  _putcher function to print the alphaber a - z
*
*/

void print_alphabet(void);
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		_putcher(ch);
	_putcher('\n');
}
