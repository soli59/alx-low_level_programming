#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the elements of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: function prints elements of struct dog in specific format.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
