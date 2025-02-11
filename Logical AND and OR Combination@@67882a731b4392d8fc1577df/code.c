#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

   
    if (num1 > 0 && num2 < 0) {
        printf("Condition met: First number is greater than zero AND second number is less than zero.\n");
    } else {
        printf("Condition not met.\n");
    }

    
    if (num1 > 0 || num2 < 0) {
        printf("At least one condition is true: First number > 0 OR second number < 0.\n");
    } else {
        printf("Neither condition is true.\n");
    }

    return 0;
}
