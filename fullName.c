// using fgets for showing the full name
#include <stdio.h>

int main(){
    char myName[30];
    printf("enter your full name\n");
    fgets(myName, sizeof(myName),stdin);
    printf("hello %s",myName);

    return 0;
}