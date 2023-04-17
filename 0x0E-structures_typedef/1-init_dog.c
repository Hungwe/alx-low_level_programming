#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - Initialise struct
 * @d: Dog object pointer
 * @name: Name pointer
 * @age: Dog age
 * @owner: Owner pointer
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}