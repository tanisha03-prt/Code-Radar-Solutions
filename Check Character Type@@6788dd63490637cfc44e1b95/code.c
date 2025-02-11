#include <stdio.h>

int main() {
    char ch;
    
    // Taking input for a character
    scanf(" %c", &ch);
    
    // Checking if the character is a vowel, consonant, digit, or special character
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special Character\n");
    }
    
    return 0;
}
