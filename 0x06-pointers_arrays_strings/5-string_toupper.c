#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_toupper - Turns all characters in a string to caps using pointers
 * @str: Input string pointer
 *
 * Return: Pointer of modified string
 *
 */

char *string_toupper(char *str)
{
char *y;
int len;
len = strlen(str);
int i;
for (i = len - 1; i > -1; i--)
{
y = (str + i);
if (*y > 96 && *y < 123)
{
*y = *y - 32;
}
else
{
continue;
}
}
return (y);
}
