#include<stdio.h>
#include<conio.h>

// Cel to fah
float celtofah(float deg) {
    return (deg * 9 / 5) + 32;
}

// Cel to kel
float celtokel(float deg) {
    return deg + 273.15;
}

// fah to cel
float fahtocel(float deg) {
    return (deg - 32) * 5 / 9;
}

// fah to kel
float fahtokel(float deg) {
    return (deg - 32) * 5 / 9 + 273.15;
}

// kel to cel
float keltocel(float deg) {
    return deg - 273.15;
}

// kel to fah
float keltofah(float deg) {
    return (deg - 273.15) * 9 / 5 + 32;
}

int main() {
    float cen, fah, kel;

    printf("\nEnter Celsius value: ");
    scanf("%f", &cen);

    fah = celtofah(cen);
    cen = fahtocel(fah);
    kel = fahtokel(fah);

    char *ap = "\n------------------------------\n";

    printf("%s", ap);
    printf("Celsius: %f\nFahrenheit: %f\nKelvin: %f", cen, fah, kel);
    printf("%s", ap);

    getch();

    return 0;
}
