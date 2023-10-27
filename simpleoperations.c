#include <stdio.h>
float num1;
float num2;
float result;
char operator;


int main(){
    printf("Enter your first digit:\n");
    scanf("%f",&num1);
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter your second digit:\n");
    scanf("%f",&num2);
    printf( "You have entered \"%.2f\" and  \"%.2f\"\n", num1,num2);
        switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

return 0;
}
