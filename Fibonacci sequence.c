#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci sequence up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int terms = 7;
    fibonacci(terms);
    return 0;
}