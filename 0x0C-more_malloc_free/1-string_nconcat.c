#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * string_nconcat - Concate strings
 * @s1: String pointer 1
 * @s2: String pointer 2
 * @n: Number of bytes
 *
 * Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int i;
int j;
int len1;
int len2;
len1 = strlen(s1);
len2 = strlen(s1) + n;
ptr = malloc(len2);
for (i = 0; i < len1; i++)
{
ptr[i] = s1[i];
}
for (j = 0; j < n; j++)
{
ptr[len1 + j] = s2[j];
}
return (ptr);
}
