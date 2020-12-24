// program to calculate sum of two distances where the distance is measured in feet and inch

#include<stdio.h>
#include<conio.h>

int main() {

    int d1f, d1i, d2f, d2i, sumf, sumi;

    printf("\nEnter first distance value in terms of feet and inch respectively: ");
    scanf("%d %d", &d1f, &d1i);

    printf("\nEnter second distance value in terms of feet and inch respectively: ");
    scanf("%d %d", &d2f, &d2i);

    sumf = d1f + d2f;
    sumi = d1i + d2i;

    printf("\n\nDistance: %d feet %d inch\n", sumf, sumi);

    getch();
    return 0;
}
