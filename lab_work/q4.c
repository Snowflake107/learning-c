// program to calculate the distance using s=ut+1/2at^2

#include<stdio.h>
#include<conio.h>

int main() {

    int s, u, t, a;

    printf("\nEnter initial velocity (u): ");
    scanf("%d", &u);

    printf("\nEnter acceleration (a): ");
    scanf("%d", &a);

    printf("\nEnter time (t): ");
    scanf("%d", &t);

    s = u * t + 0.5 * a * (t * t);

    printf("\n\nGiven,\nInitial Velocity (u) = %d\nAcceleration (a) = %d\nTime (t) = %d\nDisplacement (s): ???\n", u, a, t);

    printf("\ns = ut+1/2at^2\n");

    printf("\nTherefore, s = %dm", s);

    getch();
    return 0;
}
