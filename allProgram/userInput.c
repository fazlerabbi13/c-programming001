#include <stdio.h>

int main()
{
    char name[30];

    printf("enter your name and press enter:\n");

    scanf("%s", name);

    printf("hello %s", name);

    return 0;
}