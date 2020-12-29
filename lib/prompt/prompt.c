#include<stdio.h>

// prompt something
char *prompt(char *question) {
    char *response;

    printf("%s", question);
    scanf("%[^\n]s", response);

    return response;
}
