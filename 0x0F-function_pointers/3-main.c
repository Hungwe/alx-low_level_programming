#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - Function to carry out maths operations
 * @argc: Arguments
 * @argv: Array of pointers
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
char *op;
int n1;
int n2;

if (argc != 4)
{
printf("Error\n");
exit(98);
}
n1 = atoi(argv[1]);
op = argv[2];
n2 = atoi(argv[3]);

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if ((n2 == 0 && *op == '%') || (n2 == 0 && *op == '/'))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(n1, n2));
return (0);
}
