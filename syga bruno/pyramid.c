#include <stdio.h>

int main() {
    int rows = 7;
    int spaces = 3;
    int stars = 1;


    for (int i = 1; i <= rows / 2 + 1; i++) {

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }


        for (int j = 1; j <= stars; j++) {
            printf("*");
        }


        spaces--;
        stars += 2;


        printf("\n");
    }

    spaces = 1;
    stars = rows - 2;


    for (int i = 1; i <= rows / 2; i++) {

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }


        for (int j = 1; j <= stars; j++) {
            printf("*");
        }


        spaces++;
        stars -= 2;


        printf("\n");
    }

    return 0;
}
