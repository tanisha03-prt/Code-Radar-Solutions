// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=n;space>=1;space--){
            printf(" ");
        }
        for(int j=1;j<=space;j++){
            printf("*");
        }
        printf("\n");
    }
}