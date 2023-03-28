#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * puts_half - prints out a part of a string using pointers
 * @str: Input string pointer
 *
 */

void puts_half(char *str)
{
int l;
int i;
l = strlen(str);
if (l % 2 == 0)
{
int half;
half = l / 2;
for (i = half; i < l; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
else if (l % 2 != 0)
{
int n;
int sub;
sub = l - 1;
n = sub / 2;
for (i = n + 1; i < l; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
}
