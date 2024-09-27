#include <stdio.h>

int main(){
    int myNum;
    char myChar;

    printf("enter a number and character: \n");
    
    scanf("%d %c", &myNum, &myChar);
    
    printf("your character: %d \n", myNum);
    printf("your number is: %c \n", myChar);

    return 0;

}