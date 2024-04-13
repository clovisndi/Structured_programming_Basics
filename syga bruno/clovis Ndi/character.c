#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        printf("You entered a capital letter\n");
    } else if (c >= 'a' && c <= 'z') {
        printf("You entered a small case letter\n");
    } else if (c >= '0' && c <= '9') {
        printf("You entered a digit\n");
    } else {
        printf("You entered a special symbol\n");
    }
    return 0;
}
