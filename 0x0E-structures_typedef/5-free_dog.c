#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"

/**
 * free_dog - Free the dogs
 * @d: Struct object
 *
 */

void free_dog(dog_t *d)
{
free(d);
}
