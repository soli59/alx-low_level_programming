/**
 * _strcpy - Copies a string, including the null byte, from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
