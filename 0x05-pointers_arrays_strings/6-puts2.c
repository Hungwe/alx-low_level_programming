#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * puts2 - prints out every other char in a string
 * @str: Input string pointer
 *
 */

void puts2(char *str)
{
int l;
int i;
l = strlen(str);
for (i = 0; i < l; i = i + 2)
{
printf("%c", str[i]);
}
printf("\n");
}
