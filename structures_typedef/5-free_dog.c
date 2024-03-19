#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - free all dog info
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
if (!d)
return;
free(d->name);
free(d->owner);
free(d);
}
