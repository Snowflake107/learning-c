#include<stdio.h>
#include<conio.h>

int main() {

    int j;
    int i = 5;

    j = i++;

    printf("i=%d\nj=%d", i, j);

    getch();
    return 0;
}

// output:
// i = 6
// j = 5