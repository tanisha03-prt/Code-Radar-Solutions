#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    double average=((a+b+c)/3.0);
    printf("Average %.2f\n",average);
    return 0;
}