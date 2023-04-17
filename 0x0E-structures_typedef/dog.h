#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A database of dogs
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: Database for dogs
 */

struct dog
{
char *name;
float age;
char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
