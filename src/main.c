#include "array.h"

int main(int argc, const char **argv) {
    
    array *arr = (array*) malloc(sizeof(array));

    // printf("%d\n", arr->top);
    for (int i = 1; i < argc; i++) {

        array_push(arr, atoi(argv[i]));
    }

    // printf("%d\n", arr->top);
    array_each(arr);

    return 0;
}