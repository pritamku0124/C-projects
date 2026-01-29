#include <stdio.h>

int main() {
    // Declare variables to store the numbers and operation
    float num1, num2, result;
    char operation;
    
    // Display welcome message
    printf("======================================\n");
    printf("   WELCOME TO SIMPLE CALCULATOR\n");
    printf("======================================\n\n");
    
    // Get first number from user
    printf("Enter the first number: ");
    scanf("%f", &num1);
    
    // Get second number from user
    printf("Enter the second number: ");
    scanf("%f", &num2);
    
    // Display operation choices
    printf("\nChoose an operation:\n");
    printf("  + for Addition\n");
    printf("  - for Subtraction\n");
    printf("  * for Multiplication\n");
    printf("  / for Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &operation);
    
    // Use switch-case to perform the selected operation
    switch(operation) {
        
        case '+':
            // Addition operation
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '-':
            // Subtraction operation
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '*':
            // Multiplication operation
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            // Division operation with zero check
            if(num2 == 0) {
                printf("\nError: Cannot divide by zero!\n");
                printf("Please enter a non-zero second number.\n");
            } else {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
            
        default:
            // Handle invalid operation input
            printf("\nError: Invalid operation selected!\n");
            printf("Please choose from +, -, *, or /\n");
    }
    
    printf("======================================\n");
    printf("       Thank you for using Calculator\n");
    printf("======================================\n");
    
    return 0;
}
