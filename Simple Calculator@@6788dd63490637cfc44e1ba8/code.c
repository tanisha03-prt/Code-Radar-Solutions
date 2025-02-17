#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Display menu
    
    scanf(" %c", &operator);  // Space before %c to avoid newline issues

    // Input two numbers
    
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        
    }

    return 0;
}
