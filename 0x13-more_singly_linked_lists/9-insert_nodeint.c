#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: pointer to a pointer to head
 * @idx:index of the list where the new node should be added, starts at 0
 * @n: value to store in node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *current;
unsigned int i = 0;

if (head == NULL)
return (NULL);

current = *head;
for (i = 1; current && i < idx; i++)
{
current = current->next;
if (current == NULL)
return (NULL);
}

new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
if (idx == 0)
{
*head = new;
new->next = current;
}
else if (current->next)
{
new->next = current->next;
current->next = new;
}
else
{
new->next = NULL;
current->next = new;
}
return (new);
}
