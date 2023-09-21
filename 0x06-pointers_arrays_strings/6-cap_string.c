/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i, j;

	/* Capitalize the first character of the string */
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		/* Check if the current character is a separator */
		int is_separator = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}
		if (!is_separator && (str[i - 1] == ' ' || str[i - 1] == '\t' ||
					str[i - 1] == '\n' || str[i - 1] == ',' ||
					str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' ||
					str[i - 1] == '"' || str[i - 1] == '(' ||
					str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}

	return (str);
}
