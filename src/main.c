#include "array.h"

void echo_node(node* n) {

    printf("echo %d\n", n->data);
}

int main(int argc, const char **argv) {
    
    array *arr = (array*) malloc(sizeof(array));
    node *el;
    int i;

    printf("array length is %d.\n", arr->length);
    for (i = 1; i < argc - 1; i++) {

        array_push(arr, atoi(argv[i]));
    }

    array_each(arr, echo_node);
    printf("\narray length is %d.\n", arr->length);

    array_unshift(arr, atoi(argv[i]));
    array_each(arr, echo_node);
    printf("\narray length is %d.\n", arr->length);

    el = array_shift(arr);
    printf("array shift function data is %d.\n", el->data);

    el = array_pop(arr);
    printf("array pop function data is %d.\n", el->data);
    el = array_pop(arr);
    printf("array pop function data is %d.\n", el->data);

    array_each(arr, echo_node);
    printf("\narray length is %d.\n", arr->length);

    return 0;
}