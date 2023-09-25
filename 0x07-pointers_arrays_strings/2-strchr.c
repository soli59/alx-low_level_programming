/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: Character to locate.
 *
 * Return: Pointer to the first occurrence of @c in @s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	char *result = NULL;

	while (*s)
	{
		if (*s == c)
		{
			result = s;
			break;
		}
		s++;
	}

	if (*s == c)
	{
		result = s;
	}

	return (result);
}
