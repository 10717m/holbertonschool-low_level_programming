#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer of the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
char *dup_str;
unsigned int len = 0;

if (str == NULL)
return (NULL);

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

while (str[len])
len++;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
}

return (new_node);
}
