#include <stdio.h>

int pow_recursion(int x, int y) {
    if (y < 0) {
        return -1;
    } else if (y == 0) {
        return 1;
    } else {
        return x * pow_recursion(x, y - 1);
    }
}

int main() {
    int x, y;
    printf("Enter the base: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &y);
    printf("%d^%d = %d\n", x, y, pow_recursion(x, y));

    return 0;
}
