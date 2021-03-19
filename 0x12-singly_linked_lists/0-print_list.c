#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t n = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
n++;
h = h->next;
}
return (n);
}
