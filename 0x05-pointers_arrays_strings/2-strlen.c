/**
* _strlen - Returns the length of a string.
* @s: Pointer to the input string.
*
* Description: This function calculates and returns the length of the
* string pointed to by @s (excluding the null terminator '\0').
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
