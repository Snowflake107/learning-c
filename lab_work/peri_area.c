// program to find perimeter and area of a rectangle

#include<stdio.h>
#include<conio.h>

int main() {

    int len, bre, peri, area;

    printf("\nRectangle length: ");
    scanf("%d", &len);

    printf("\nRectangle breadth: ");
    scanf("%d", &bre);

    area = len * bre;

    peri = 2 * (len + bre);

    printf("\nArea: %d\nPerimeter: %d", area, peri);

    getch();

    return 0;

}