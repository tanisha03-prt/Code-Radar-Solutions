#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if((i==1) && (j==1) || (i==4) && (j==6)){
                printf("*");
            }else{
                printf(" ");
            }
            printf("\n");

        }
    
    printf("\n");
}