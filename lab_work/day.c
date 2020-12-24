// Program to convert number of days into years, months and days

#include<stdio.h>
#include<conio.h>

int main() {

    int days;

    printf("\nEnter the number of days: ");
    scanf("%d", &days);

    int year = days / 365;

    days = days % 365;

    float months = days / 30;

    days = days % 30;

    printf("\n\nDays: %d\nMonths: %.0f\nYear: %d\n", days, months, year);

    getch();
    return 0;
}
