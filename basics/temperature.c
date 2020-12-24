#include<stdio.h>
#include<conio.h>

float celtofah(float deg) {
    return (deg * 9 / 5) + 32;
}

float fahtocel(float deg) {
    return (deg - 32) * 5 / 9;
}

float fahtokel(float deg) {
    return (deg - 32) * 5 / 9 + 273.15;
}


int main() {
    float cen, fah, kel;

    printf("\nEnter Celsius value: ");
    scanf("%f", &cen);

    fah = celtofah(cen);
    cen = fahtocel(fah);
    kel = fahtokel(fah);

    printf("Celsius: %f\nFahrenheit: %f\nKelvin: %f", cen, fah, kel);

    getch();

    return 0;
}
