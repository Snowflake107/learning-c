#include<stdio.h>
#include<conio.h>

void main() {
    int num; int div;

    printf("\nEnter a number:\n");
    scanf("%d", &num);

    printf("\nEnter another number:\n");
    scanf("%d", &div);

    int mod = num % div;

    printf("Remainder: %d", mod);

    getch();
}
