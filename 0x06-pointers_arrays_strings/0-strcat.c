#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strcat - Concate a string to another
 * @dest: String to concate to
 * @src: string to be concated
 *
 * Return: Pointer to concated string
 */

char *_strcat(char *dest, char *src)
{
char *ptr = strcat(dest, src);
return (ptr);
}
