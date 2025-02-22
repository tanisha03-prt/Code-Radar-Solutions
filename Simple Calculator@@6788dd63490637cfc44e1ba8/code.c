#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char operator;
    scanf("%c", &operator);
    switch(operator){
        case'+': printf("%d",a+b);
        break;
        case'-': printf("%d",a-b);
        break;
        case'/':
        if(b==0){
            printf("error");
        } else{
            printf("%d",a/b);
        }
        break;
        case'*': printf("%d",a*b);
        break;
    }
}
