#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"

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
if (d == NULL)
{
return;
}

(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
