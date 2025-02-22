#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char operator;
    scanf("%c",&operator);
    switch(operator){
        case'+': printf("%d",a+b);
        case'-': printf("%d",a-b);
        case'/': printf("%d",a/b);
        case'*': printf("%d",a*b);
    }
}
