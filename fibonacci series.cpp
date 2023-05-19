#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;
    printf("Enter the limit for the Fibonacci sequence: ");
    scanf("%d", &limit);
    printf("Fibonacci sequence up to %d:\n", limit);
    printf("%d\n", first);
    printf("%d\n", second);
    for (int i = 2; i < limit; i++) {
        next = first + second;
        printf("%d\n", next);
        first = second;
        second = next;
    }
    return 0;
}

