#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < 54; i++)
{
if (alpha[i] == '\0')
{
putchar('\n');
break;
}
else
putchar(alpha[i]);
}
return (0);
}