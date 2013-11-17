#include "array.h"

void array_push(array *head, int n) {

    if(head == NULL) {

        return;
    }

    if(head->element == NULL) {

        head->element = (node*) malloc(sizeof(node));
    }

    if(node_insert(head->element, head->length, n)) {
        head->length++;
    }
}

void array_unshift(array *head, int n) {

    if(head == NULL) {

        return;
    }

    if(head->element == NULL) {

        head->element = (node*) malloc(sizeof(node));
    }

    if(node_insert(head->element, 0, n)) {
        head->length++;
    }
}

node* array_pop(array *head) {

    node* el;

    if(head == NULL || head->element == NULL) {

        return NULL;
    }

    el = node_del(head->element, head->length);
    
    if(el) {

        head->length--;
    }

    return el;
}

node* array_shift(array *head) {

    node* el;

    if(head == NULL || head->element == NULL) {

        return NULL;
    }

    el = node_del(head->element, 0);
    
    if(el) {

        head->length--;
    }

    return el;
}

void array_each(array *head, pf cb) {

    if(head == NULL || cb == NULL) {

        return;
    }

    node *temp = head->element->next;

    for (int i = 0; i < head->length; ++i) {
        
        // printf("%d ", temp->data);
        cb(temp);
        temp = temp->next;
    }
}