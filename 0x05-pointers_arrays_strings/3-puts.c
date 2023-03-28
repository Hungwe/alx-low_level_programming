#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _puts - prints out a string using pointers
 * @str: Input string pointer
 *
 */

void _puts(char *str)
{
while (*str != '\0')
{
printf("%c", *str);
str = str + 1;
}
printf("\n");
}
