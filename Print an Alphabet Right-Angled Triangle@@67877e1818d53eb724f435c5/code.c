// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char letter ='A';
        for(int j=1;j<=i;j++){
            printf("%c",letter);
            letter++;
        }
        printf("\n");
    }
}