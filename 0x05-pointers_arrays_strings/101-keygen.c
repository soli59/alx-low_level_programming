#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random password.
 *
 * Return: Always 0.
 */
int main(void)
{
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1]; /* +1 for null-terminator */
	int i;

	/* Seed the random number generator with the current time */
	srand(time(NULL));

	/* Generate a random password */
	for (i = 0; i < PASSWORD_LENGTH; i++)

	{
	int index = rand() % (sizeof(charset) - 1);

	password[i] = charset[index];

	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Random Password: %s\n", password);

	return (0);
}
