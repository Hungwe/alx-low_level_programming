#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strcmp - Compares 2 strings using pointers
 * @s1: Input string pointer 1
 * @s2: Input string pointer 2
 *
 * Return: 15 or -15 or 0
 *
 */

int _strcmp(char *s1, char *s2)
{
int y;
y = strcmp(s1, s2);
if (y == 1)
{
return (15);
}
else if (y == -1)
{
return (-15);
}
else
{
return (0);
}
}
