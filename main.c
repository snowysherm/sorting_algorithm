#include <stdio.h>

int main(void) {

    int x[] = {1, 2, 3, 20, 539};
    int i;

    int length = sizeof(x) / sizeof(x[0]);

    printf("laenge des arrays: %d elemente\n", length);

    for (i = 0; i < length; i++) {
        printf("%i\n", x[i]);
    }

    return 0;
}
