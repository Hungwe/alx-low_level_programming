#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strncat - Concates strings using pointers
 * @dest: Destination pointer
 * @src: Source pointer
 * @n: Size of byte(s)
 *
 * Return: Pointer that points to concated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
char *ptr;
ptr = strncat(dest, src, n);
return (ptr);
}
