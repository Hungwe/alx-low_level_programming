#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"
#include "main.h"

/**
 * print_dog - Print dog profile
 * @d: Dog struct pointer
 *
 */

void print_dog(struct dog *d)
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
