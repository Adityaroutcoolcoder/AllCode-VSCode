#include <stdio.h>

int main() {
    int x, y, z;
    char sy;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Enter your symbol  ");
    scanf(" %c", &sy);
    switch (sy) {

        case '+':
            z = x + y;
            printf("Addition is %d\n", z);
            break;

        case '*':
        z = x * y;
        printf("Multiplication is %d\n", z);
        break;

        case '-':
            z = x - y;
            printf("Substract is %d\n", z);
            break;

            case '%':
            z = x % y;
            printf("Remainder is %d\n", z);
            break;

            case '/':
            z = x / y;
            printf("Division is %d\n", z);
            break;
    }
}