#include "array.h"

void array_push(array *head, int n) {

    if(head == NULL) {

        return;
    }

    if(head->element == NULL) {

        head->element = (node*) malloc(sizeof(node));
    }

    node_insert(head->element, head->top, n);
    (head->top)++;
}

void array_each(array *head) {

    if(head == NULL) {

        return;
    }

    node *temp = head->element->next;

    for (int i = 0; i < head->top; ++i) {
        
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}