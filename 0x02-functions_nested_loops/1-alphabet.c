#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * Function to print alphabet in small caps
 *
 * Return: string of alphabet
 */

char print_alphabet(void)
{
int i;
char alpha[] = "abcdefghijklmnopqrstuvwxyz";
char out;

for (i = 0; i < 27; i++)
{
if (alpha[i] == '\0')
{
out = putchar('\n');
break;
}
else
out = putchar(alpha[i]);
}
return (out);
}
