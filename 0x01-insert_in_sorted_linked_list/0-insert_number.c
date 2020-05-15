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

    if (!*head) {
        *head = node;
        return (*head);
    }

    while(temp->next && temp->next->n < number) {
        temp = temp->next;
    }

    if (temp->n < number) {
        hold = temp->next;
        temp->next = node;
        node->next = hold;
    }
    else {
        node->next = *head;
        *head = node;
    }
    return(node);
}
