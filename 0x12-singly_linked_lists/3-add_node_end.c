#include "lists.h"
/**
 * add_node_end - Add node to end of linked list
 * @head: head of the list
 * @str: string for node
 *
 * Return: address to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current_node;
int i;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

if (*head != NULL)
{
current_node = *head;
for (i = 0; current_node->next != NULL; i++)
{
current_node = current_node->next;
}
current_node->next = new_node;
}
else
*head = new_node;

new_node->next = NULL;
new_node->str = strdup(str);
for (i = 0; str[i] != '\0'; i++)
;
new_node->len = i;

return (new_node);
}
