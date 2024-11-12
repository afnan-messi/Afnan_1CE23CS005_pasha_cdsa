#include <stdio.h>

int main() {
    char choice;
    float num1, num2, result;

    printf("Enter your choice:\n");
    printf("a - Add\n");
    printf("s - Subtract\n");
    printf("n - Multiply\n");
    printf("d - Divide\n");
    scanf(" %c", &choice);
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 'a':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 's':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 'n':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}