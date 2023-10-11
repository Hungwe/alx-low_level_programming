#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"

/**
 * new_dog - Create new dog data
 * @name: Name pointer
 * @age: Age pointer
 * @owner: Owner pointer
 *
 * Return: Pointer of new dog data
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
if (name == NULL || owner == NULL)
{
return (NULL);
}
else
{
ndog = malloc(sizeof(*ndog));
ndog->name = name;
ndog->age = age;
ndog->owner = owner;
return (ndog);
}
}
