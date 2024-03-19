#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strcopy - copy read data
 * @des: pointer to copy char
 * @src: read only data
 */
void _strcopy(char *des, char *src)
{
int i;
for (i = 0; src[i]; i++)
des[i] = src[i];
des[i] = '\0';
}
/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int a, b;
for (a = 0; name[a]; a++)
;
for (b = 0; owner[b]; b++)
;
d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
d->name = malloc(a + 1);
if (!d->name)
{
free(d);
return (NULL);
}
d->owner = malloc(b + 1);
if (!d->owner)
{
free(d->name);
free(d);
return (NULL);
}
_strcopy(d->name, name);
_strcopy(d->owner, owner);
d->age = age;
return (d);
}

