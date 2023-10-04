#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of program arguments.
 * @av: An array of strings containing program arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int i, j, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		total_len += len + 1; /* +1 for newline character */
		len = 0;
	}

	concatenated = malloc((total_len + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concatenated[len++] = av[i][j];

		concatenated[len++] = '\n';
	}

	concatenated[len] = '\0';

	return (concatenated);
}
