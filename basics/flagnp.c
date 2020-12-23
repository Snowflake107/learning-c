#include<stdio.h>
#include<conio.h>

int main() {

    printf("\n\n");

    // top triangle
    for (int i = 0; i < 20; i++) {

        for (int j = 0; j <= i; j++) {
            printf(" * ");
        }

        printf("\n");

    }

    // bottom triangle
    for (int i = 0; i < 20; i++) {

        for (int j = 0; j <= i; j++) {
            printf(" * ");
        }

        printf("\n");

    }

    // Vertical line
    for (int i = 0; i < 15; i++) {
        printf(" *  *\n");
    }

    getch();

    return 0;

}
