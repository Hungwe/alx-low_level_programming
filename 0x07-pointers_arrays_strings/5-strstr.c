#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strstr - Return a segmented string using pointers
 * @haystack: String pointer
 * @needle: String segment pointer
 *
 * Return: Pointer at the beginning of segmented string
 */

char *_strstr(char *haystack, char *needle)
{
char *y;
y = strstr(haystack, needle);
return (y);
}
