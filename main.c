#include <stdio.h>

int main () {
    int number;
    printf("---Enter the number you want multiplication table of---\nNumber: ");
    scanf("%d", &number);
    printf("Table of %d\n\n", number);


    printf("%d x 1 = %d\n", number, number);
    printf("%d x 2 = %d\n", number, number*2);
    printf("%d x 3 = %d\n", number, number*3);
    printf("%d x 4 = %d\n", number, number*4);
    printf("%d x 5 = %d\n", number, number*5);
    printf("%d x 6 = %d\n", number, number*6);
    printf("%d x 7 = %d\n", number, number*7);
    printf("%d x 8 = %d\n", number, number*8);
    printf("%d x 9 = %d\n", number, number*9);
    printf("%d x 10 = %d\n", number, number*10);

    return 0;

}