#include <stdio.h>

int main() {
    int number;

    printf("\nEnter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d\n", number, i, number * i);
    }

    return 0;

}
