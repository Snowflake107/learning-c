// program to convert temperature in centigrade into fahrenheit

#include<stdio.h>
#include<conio.h>

int main() {

    float centigrade, fahrenheit;

    printf("\nCentigrade value: ");
    scanf("%f", &centigrade);

    fahrenheit = 1.8 * centigrade + 32;

    printf("\n\nCentigrade: %.2f\nFahrenheit: %.2f\n", centigrade, fahrenheit);

    getch();
    return 0;
}
