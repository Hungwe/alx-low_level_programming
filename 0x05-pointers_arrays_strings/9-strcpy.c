#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strcpy - Copy a  string using pointers
 * @dest: Destination pointer of string to be copied
 * @src: Pointer for string to be copied
 *
 * Return: pointer for  string coppied
 */

char *_strcpy(char *dest, char *src)
{
char *str;
str = strcpy(dest, src);
return (str);
}
