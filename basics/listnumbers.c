#include<stdio.h>
#include<conio.h>

void main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    if (start >= end) {
        printf("Startinging number may not be greater than or equal to ending number!\n");
    }

    else {

        printf("\n\nGenerating numbers between %d and %d...\n\n", start, end);

        for (int i = start; i <= end; i++) {
            printf("%d\n", i);
        }

    }
}
