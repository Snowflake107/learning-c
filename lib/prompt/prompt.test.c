#include<stdio.h>
#include<conio.h>
#include "prompt.h"

int main() {
    char *name = prompt("What is your name?\n-> ");

    printf("Your name is %s.", name);

    getch();
    return 0;
}

// compile: gcc prompt.test.c prompt.c -o prompt.exe
