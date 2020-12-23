#include<stdio.h>
#include<conio.h>
#include<time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    printf("%s", asctime(tm));
    getch();

    return 0;
}
