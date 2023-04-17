
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"

/**
 * print_dog - Print dog profile
 * @d: Dog struct pointer
 *
 */

void print_dog(struct dog *d)
{
if ((*d).name == NULL && (*d).age != 0 && (*d).name != NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
else if ((*d).age == 0 && (*d).name != NULL && (*d).owner != NULL)
{
printf("Name: %s\n", (*d).name);
printf("Age: (nil)\n");
printf("Owner: %s\n", (*d).owner);
}
else if ((*d).owner == NULL && (*d).age != 0 && (*d).name != NULL)
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: (nil)\n");
}
else if ((*d).owner == NULL && (*d).age != 0 && (*d).name == NULL)
{
printf("Name: (nil)\n");
printf("Age: %f\n", (*d).age);
printf("Owner: (nil)\n");
}
else if ((*d).age == 0 && (*d).name == NULL && (*d).owner != NULL)
{
printf("Name: (nil)\n");
printf("Age: (nil)\n");
printf("Owner: %s\n", (*d).owner);
}
else if ((*d).name == NULL && (*d).age == 0 && (*d).owner == NULL)
{
return;
}
else
{
printf("Name: %s\n", (*d).name);
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner);
}
}
