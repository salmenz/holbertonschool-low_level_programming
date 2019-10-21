#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - variable of type dog
 * @d: A struct dog pointer
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
