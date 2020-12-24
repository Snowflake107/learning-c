// program to calculate area and circumference of a circle

#include<stdio.h>
#include<conio.h>

// value of PI
#define PI 3.141592653589793

int main() {

    int r;

    printf("\nEnter radius: ");
    scanf("%d", &r);

    float area = PI * (r * r);
    float circumference = 2 * PI * r;

    printf("\n\nArea: %.2f\nCircumference: %.2f\n", area, circumference);

    getch();

    return 0;
}
