#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int min, second;

    // Start with first two
    if (a < b) {
        min = a;
        second = b;
    } else {
        min = b;
        second = a;
    }

    // Insert c
    if (c < min) {
        second = min;
        min = c;
    } else if (c < second) {
        second = c;
    }

    // Insert d
    if (d < min) {
        second = min;
        min = d;
    } else if (d < second) {
        second = d;
    }

    // Insert e
    if (e < min) {
        second = min;
        min = e;
    } else if (e < second) {
        second = e;
    }

    printf("Second minimum = %d\n", second);
    return 0;
}
