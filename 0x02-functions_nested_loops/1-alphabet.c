#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

print_alphabet();

return (0);
}

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
