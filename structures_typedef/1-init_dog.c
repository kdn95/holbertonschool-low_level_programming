#include "dog.h"
/**
 * init_dog - initialise var of struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: its age
 * @owner: pointer to name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
