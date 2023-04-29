#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Print contents of linked list
 * @h: Head
 *
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
const list_t *current;
current = h;
size_t el_num;
el_num = 0;
if (current->str == NULL)
{
printf("[0] (nil)\n");
printf("[%d] %s\n", current->len, current->str);
}
else
{
while (current != NULL)
{
printf("[%d] %s\n", current->len, current->str);
current = current->next;
el_num = el_num + 1;
}
}
return (el_num);
}
