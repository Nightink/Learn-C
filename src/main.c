#include "array.h"

void each_node(node* n) {

    printf("echo %d\n", n->data);
}

int main(int argc, const char **argv) {
    
    array *arr = (array*) malloc(sizeof(array));
    node *el;

    printf("array length is %d.\n", arr->length);
    for (int i = 1; i < argc; i++) {

        array_push(arr, atoi(argv[i]));
    }

    array_each(arr, each_node);
    printf("\narray length is %d.\n", arr->length);

    el = array_pop(arr);
    printf("array pop function data is %d.\n", el->data);
    el = array_pop(arr);
    printf("array pop function data is %d.\n", el->data);

    array_each(arr, each_node);
    printf("\narray length is %d.\n", arr->length);

    return 0;
}