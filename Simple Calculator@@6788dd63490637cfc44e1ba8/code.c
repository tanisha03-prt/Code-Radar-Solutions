#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char operator;
    scanf("%c",&operator);
    switch(operator){
        case'+': printf("%d %c",a+b,operator);
        case'-': printf("%d %c",a-b,operator);
        case'/': printf("%d %c",a/b,operator);
        case'*': printf("%d %c",a*b,operator);
    }
}
