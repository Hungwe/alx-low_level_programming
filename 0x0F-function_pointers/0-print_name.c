#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"

/**
 * print_name - Function to print name
 * @name: Name pointer
 * @f: Function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
