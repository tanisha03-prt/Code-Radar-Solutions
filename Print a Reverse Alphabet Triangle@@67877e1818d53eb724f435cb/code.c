#include <stdio.h>
int main() {
    int i, j, rows = 5;
    for (i = rows; i >= 1; i--) {
        char ch = 'A' + i - 1;
        for (j = i; j >= 1; j--) {
            printf("%c", ch--);
        }
        printf("\n");
    }
    return 0;
}
