#include<stdio.h>
#include<conio.h>

void main() {
    int len, bre, area;

    printf("Enter length:\n");
    scanf("%d", &len);

    printf("Enter breadth:\n");
    scanf("%d", &bre);

    area = len * bre;

    printf("Area of the given triangle is: %d", area);

    getch();
}
