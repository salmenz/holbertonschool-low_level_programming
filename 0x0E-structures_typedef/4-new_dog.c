#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new dog of type struct dog
 * @name: The new dog's name
 * @age: The new dog's age
 * @owner: The new dog's owner
 *
 * Return: A pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dogg;
int i, j;
int l, k;

dogg = malloc(sizeof(struct dog));
if (dogg == NULL)
return (NULL);
for (l = 1; name[l] != '\0'; l++)
;
dogg->name = malloc(sizeof(char) * (l + 1));
if (dogg->name == NULL)
{
free(dogg);
return (NULL);
}
for (k = 1; owner[k] != '\0'; k++)
;
dogg->owner = malloc((k + 1) * sizeof(char));
if (dogg->owner == NULL)
{
free(dogg->name);
free(dogg);
return (NULL);
}
dogg->age = age;
for (i = 0; name[i] != '\0'; i++)
dogg->name[i] = name[i];
dogg->name[i] = '\0';
for (j = 0; owner[j] != '\0'; j++)
dogg->owner[j] = owner[j];
dogg->owner[j] = '\0';
return (dogg);
}
