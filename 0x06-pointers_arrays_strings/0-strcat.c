/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	/* Calculate the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Calculate the length of src */
	while (src[src_len] != '\0')
		src_len++;

	/* Append src to dest */
	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	/* Add the null-terminating byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
