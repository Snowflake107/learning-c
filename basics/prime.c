#include<stdio.h>
#include<conio.h>

int main() {

    // variables
    int start, end, j, i;

    // get starting point
    printf("\n\nEnter starting number: ");
    scanf("%d", &start);

    // get ending point
    printf("\n\nEnter ending number: ");
    scanf("%d", &end);

    // validate points
    if (start > end) return printf("Invalid range specified!");

    // create a loop
    for (i = start == 0 ? 1 : start; i < end; i++) {

        // another loop to validate prime numbers
        for (j = 2; j < i; j++) {
            if (i % j == 0) break;
        }

        // display prime numbers
        if (i == j) printf("\n%d", j);
    }

    getch();
    return 0;
}
