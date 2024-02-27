#include<stdio.h>
#include<math.h>

int main() {
    float number1, number2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &number1);
    
    printf("Enter the second number: ");
    scanf("%f", &number2);
    
    printf("Enter the operator you want to use: +, -, /, *, ^: ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            printf("The sum of %.2f and %.2f is %.2f\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("The subtraction of %.2f and %.2f is %.2f\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("The product of %.2f and %.2f is %.2f\n", number1, number2, number1 * number2);
            break;
        case '/':
            if(number2 == 0) {
                printf("Error: Division by zero is not allowed\n");
            } else {
                printf("The division of %.2f by %.2f is %.2f\n", number1, number2, number1 / number2);
            }
            break;
        case '^':
            printf("The power of %.2f raised to %.2f is %.2f\n", number1, number2, pow(number1, number2));
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
