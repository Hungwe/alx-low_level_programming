#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _strdup - Dublicate string
 * @str: String pointer
 *
 * Return: Pointer of duplicate string
 */

char *_strdup(char *str)
{
int len = strlen(str);
char *mem = (char *)malloc(len + 1);
if (str != NULL)
{
mem = str;
return (mem);
}
else
{
return (NULL);
}
}
