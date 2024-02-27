#include<stdio.h>
int main()
{
    float number1,number2;
    char operator;
    printf("Enter the number1");
    scanf("%f", &number1);
    printf("Enter the number2");
    scanf("%f", &number2);
    printf("Enter the operator you want to use : +,-,/,*");
    scanf(" %c", &operator);
    switch(operator)
    {
        case'+':
            printf("The sum of a and b is %.2f", number1+number2);
            break;
        case'-':
            printf("The subtraction of a and b is %.2f", number1-number2);
            break;
        case'*':
            printf("The sum of a and b is %.2f", number1*number2);
             break;
        case'/':
            printf("The sum of a and b is %.2f", number1/number2);
            if(number2=0)
            {
                printf("Error:Division by zero is not allowed");
            }
            if(number2!=0)
            {
                printf("%.2f", number1/number2);
            }
             break;
        default:
            printf("Error: Invalid operator.");
            break;
    }
}