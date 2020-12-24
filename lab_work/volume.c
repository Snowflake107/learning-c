// program to find the volume of a cube

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {

    double length, vol;

    printf("\nEnter the length: ");
    scanf("%lf", &length);

    vol = pow(length, 3);

    printf("\nVolume of the cube is: %0.lf", vol);

    getch();

    return 0;
}