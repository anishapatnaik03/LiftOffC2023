#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);
    switch(choice) {
    case 1:
     result = num1 + num2;
    printf("The sum is %f\n", result);        
     break;              
        case 2:
    result = num1 - num2;
    printf("The difference is %f\n", result);
    break;        
    case 3:
     result = num1 * num2;
     printf("The product is %f\n", result);
     break;
     case 4:
    if(num2 != 0) {
    result = num1 / num2;
    printf("The quotient is %f\n", result);
    } else {
    printf("Error: division by zero\n");
     }
    break;
     default:
    printf("Invalid choice\n");
    }
    return 0;
}