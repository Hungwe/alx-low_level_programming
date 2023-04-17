#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "dog.h"
#include "main.h"


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
struct dog my_dog;
init_dog(&my_dog, "Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}

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
