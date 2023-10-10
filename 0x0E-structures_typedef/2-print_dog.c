#include <stdio.h>
#include "dog.h" /* Include the header file with the struct definition */

/**
 * print_dog - Print the elements of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: func prints the elements of a struct dog in a specific format.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return; /* Don't proceed if d is NULL */

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
