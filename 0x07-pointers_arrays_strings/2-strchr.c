#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strchr - Return pointer of new string
 * @s: Input string pointer
 * @c: Character
 *
 * Return: Pointer
 */

char *_strchr(char *s, char c)
{
char *y;
y = strchr(s, c);
return (y);
}
