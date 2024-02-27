#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float deg2rad(float deg) {
    return deg * (PI / 180);
}

int main() {
    float number1, number2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &number1);
    
    printf("Enter the second number: ");
    scanf("%f", &number2);
    
    printf("Enter the operator you want to use: +, -, /, *, ^, s, c, t: ");
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
        case 's':
            printf("The sine of %.2f is %.2f\n", number1, sin(deg2rad(number1)));
            printf("The sine of %.2f is %.2f\n", number2, sin(deg2rad(number2)));
            break;
        case 'c':
            printf("The cos of %.2f is %.2f\n", number1, cos(deg2rad(number1)));
            printf("The cos of %.2f is %.2f\n", number2, cos(deg2rad(number2)));
            break;
        case 't':
            printf("The tan of %.2f is %.2f\n", number1, tan(deg2rad(number1)));
            printf("The tan of %.2f is %.2f\n", number2, tan(deg2rad(number2)));
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
