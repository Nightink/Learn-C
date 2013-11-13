#include <stdio.h>

// #include <stdlib.h>
// #include <stdbool.h>

// bool sort(int a, int b) {

//     return a > b;
// }

int main(int argc, const char **argv) {

    int a[5] = {9, 3, 5, 2, 1};

    for (int i = 0; i < 5; i++) {

        for(int j = i + 1; j < 5; j++) {

            if(a[i] > a[j]) {

                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }

    for (int i = 0; i < 5; i++) {

        printf("%d ", a[i]);
    }

    return 0;
}