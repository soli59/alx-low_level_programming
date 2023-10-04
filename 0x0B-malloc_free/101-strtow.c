#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	char **words = NULL;
	int word_count = 0, i, j, k;
	int in_word = 0;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				word_count++;
				in_word = 0;
			}
		}
		else
		{
			in_word = 1;
			len++;
		}
	}

	if (in_word)
		word_count++;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	in_word = 0;
	len = 0;
	k = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				words[k] = malloc((len + 1) * sizeof(char));
				if (words[k] == NULL)
				{
					while (k >= 0)
						free(words[k--]);
					free(words);
					return (NULL);
				}

				for (j = i - len; j < i; j++)
					words[k][j - i + len] = str[j];

				words[k][len] = '\0';
				k++;
				in_word = 0;
				len = 0;
			}
		}
		else
		{
			in_word = 1;
			len++;
		}
	}

	if (in_word)
	{
		words[k] = malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			while (k >= 0)
				free(words[k--]);
			free(words);
			return (NULL);
		}

		for (j = i - len; j < i; j++)
			words[k][j - i + len] = str[j];

		words[k][len] = '\0';
	}

	words[word_count] = NULL;

	return (words);
}
