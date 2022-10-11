#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog memory allocated
 * @d: struct dog
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
