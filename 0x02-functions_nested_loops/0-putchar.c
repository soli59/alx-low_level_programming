#include "main.h"

/**
 *main - Entry point of the program
 *
 *Description: prints _putcher using putcher prototype
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	char str[] = "_putcher ";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putcher(str[ch]);
	_putcher('\n');
	return (0);
}
