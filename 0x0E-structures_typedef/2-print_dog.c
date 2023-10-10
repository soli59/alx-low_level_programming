#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print the elements of a struct dog
 * @d: Pointer to the struct dog to be printer
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
