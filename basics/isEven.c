#include<stdio.h>
#include<conio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("None");
    }

    if (num % 2 == 0) {
        printf("\nEven number");
    } else {
        printf("\nOdd number");
    }

    getch();

    return 0;

}
