// Your code here...

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int num=1;
        for(int space=1;space<=n-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
            
        }
        printf("\n");
    }
}