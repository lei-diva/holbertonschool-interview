#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number){

    listint_t *node;
    listint_t *temp = *head;
    listint_t *hold;

    if (!head) {
        return (NULL);
    }

    node = malloc(sizeof(listint_t));
    node->n = number;

    while(temp->next && temp->next->n < number) {
        temp = temp->next;
    }

    hold = temp->next;
    temp->next = node;
    node->next = hold;

    return(node);
}
