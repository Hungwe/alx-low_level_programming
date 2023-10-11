#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Function to print opcodes
 *
 * @argc: Argument numbers
 * @argv: Array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
int siz;
char *ar;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

siz = atoi(argv[1]);

if (siz < 0)
{
printf("Error\n");
exit(2);
}

ar = (char *)main;

for (i = 0; i < siz; i++)
{
if (i == siz - 1)
{
printf("%02hhx\n", ar[i]);
break;
}
printf("%02hhx ", ar[i]);
}
return (0);
}
