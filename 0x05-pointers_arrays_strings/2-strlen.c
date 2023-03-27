#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: input string pointer
 *
 * Return: Size of string
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i = i + 1;
s = s + 1;
}
return (i);
}
