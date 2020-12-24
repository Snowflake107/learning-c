// Program to find square root of the given number

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    double num, sqr;

    printf("\nEnter a number: ");
    scanf("%lf", &num);

    sqr = sqrt(num);

    printf("\nSquare root of %.0lf is: %.0lf\n", num, sqr);

    getch();

    return 0;
}
