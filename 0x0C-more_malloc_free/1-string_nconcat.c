#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings with a limit on the second string
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 * Return: A pointer to the newly allocated concatenated string
 *         If malloc fails or NULL is passed, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;
	char *concat;

	/* Check for NULL strings and treat them as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of both strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* Adjust n to use the entire s2 if n is greater or equal to its length */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc((len1 + n + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 into the concatenated string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n characters from s2 into the concatenated string */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Add the null terminator */
	concat[i] = '\0';

	return (concat);
}
