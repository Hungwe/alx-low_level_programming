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
char digit[] = "0123456789";

for (i = 0; i < 11; i++)
{
if (digit[i] == '\0')
{
putchar('\n');
break;
}
else
putchar(digit[i]);
}
return (0);
}
