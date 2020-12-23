#include<stdio.h>
#include<conio.h>

int main() {

    for (int i = 20; i >= 0; i--) {

        for(int j = 0; j <= i; j++) {
            printf(" * ");
        }

        printf("\n");

    }

    getch();

    return 0;
}
